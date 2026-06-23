#include<stdio.h>
#include<math.h>
int main()
{
    int rem,n,i,sum=0,x;

    printf("Enter a number: ");
    scanf("%d",&n);

    x=n;
    
    for (i=1;i<n;i++)
    {
         rem = n%i;

         if(rem==0)
         {
          sum = sum + i;
         }   

    }

     if(sum == x)
     {
        printf("The number is a Perfect number.");
     }
     else
     {
    printf("The number is not a Perfect number.");
     }

     return 0;
}