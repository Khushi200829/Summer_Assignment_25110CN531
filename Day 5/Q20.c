#include<stdio.h>
int main()
{
    int n,flag = 1, largestprimefactor,j,i;

    printf("Enter a number to find it's biggest prime factor: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            flag = 1;

            for(j=2;j<i;j++)
            {
                if(i%j == 0)
                {
                    flag = 0;
                    break;

                }
            }

            if(flag == 1)
            {
                largestprimefactor = i;

            }

        }

    }

     printf("Largest prime factor: %d",largestprimefactor);

     return 0;
    }  

