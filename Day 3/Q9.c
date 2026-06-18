#include<stdio.h>
int main ()
{
    int n,rem=1,i;

    printf("Enter the number : ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("The Number is not prime");
    
    }
    else if (n==2)
    {
       printf("The Number is prime");
    }
     
    else 
    {
        for(i=2;i<n;i++)
        {
            rem=n%i;
            if(rem == 0)
            {
                break;
            }

        }
        if (rem!=0)
           { 
            printf("The Number is prime");
           }
        else
          { 
            printf("The Number is not prime"); 
        }
   
    }

    return 0;

}
