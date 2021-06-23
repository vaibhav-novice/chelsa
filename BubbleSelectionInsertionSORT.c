#include<stdio.h>
#include<stdlib.h>
int bubble(int arr[],int n);
int selection(int arr[],int n);
int insertion(int arr[],int n);
void swap(int *one,int *two);
void sortedArray(int arr[],int n);
int main()
{
    int array[25],i,size,ch,count=0;
    printf("\n enter the size of array:\t");
    scanf("%d",&size);
    printf("Enter the elements in array::--\n ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The menu list:::----");
    printf("\n 1. Bubble Sort  \n 2. Selection Sort   \n 3. Insertion Sort");
    while(1)
    {
        printf("\n Enter the choice number :: \t");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("The sorted array with bubble sort is \t ");
            bubble(array,size);
            
           
            break;
        case 2:
         printf("The sorted array with selection sort is \t ");
            selection(array,size);
             
           // sortedArray(array,size);
            break;
        case 3:
         printf("The sorted array with insertion sort is \t ");
            insertion(array,size);
           
           // sortedArray(array,size);
            break; 
        case 4:
            exit (0);  
            break;     
        default:
        printf("Sorry! wrong choice");

        }
    }
    return 0;
}
int bubble(int arr[],int n)
{
    int i,flag,counter=1;
    while(counter<n)
    {
        flag=0;
        {
            for(i=0;i<n-counter;i++)
            if(arr[i]>arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
                flag=1;
            }
        }
         counter++;
        if(flag==0)
        break;
       
    }
     sortedArray(arr,n);
}
int selection(int arr[],int n)
{
    int min,i,j;
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(&arr[min],&arr[i]);
        }
    }
     sortedArray(arr,n);
}
int insertion(int arr[],int n)
{
    int i,j,current;
    for ( i = 1; i < n; i++)
    {
      current =arr[i];
      j=i-1;
      while(arr[j]>current && j>=0)
      {
          arr[j+1]=arr[j];
          j--;
      }
      arr[j+1]=current;
    }
     sortedArray(arr,n);    
}
void swap(int *one,int *two)
{
    int temp;
    temp= * one;
    * one=* two;
    * two=temp;
}
void sortedArray(int arr[],int n)
{
    int i;
    // printf("\n The sorted elemnets are:::::--------");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}