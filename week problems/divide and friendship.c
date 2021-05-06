/*Ramesh got marks M1 & M2 in Hindi & Sanskrit respectively. His friend Suresh got marks M3 in subject Urdu. Find the maximum marks that Suresh can get in Urdu such that, the marks of Suresh completely divides the marks M1 & M2 both with ramainder 0.

Input Format

Enter M1 & M2 in first line and marks can be integer only.

Constraints

0<= M1,M2,M3 <=100

Output Format

Print the value of M3 as output

Sample Input 0

12 36
Sample Output 0

12
  */
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int m1,m2,m3=1;
    scanf("%d %d", &m1, &m2);
    if((m1&&m2>=0)&&(m1&&m2<=100))
    {
      int min=(m1>m2)?m1:m2;
        for(int i=1;i<=min;i++)
        {
            if((m1%i==0)&&(m2%i==0))
            {
                m3=i;
            }
        }
        printf("%d",m3);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
