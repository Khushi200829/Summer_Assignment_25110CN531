#include<stdio.h>
#include<math.h>
int main()
{
    int n,fact=1,sum=0,i,x,j;

    printf("Enter a Number: ");
    scanf("%d",&n);

    x = n;

    while(n!=0)
    {
        j = n%10;

        fact = 1;
        
        for(i=1;i<=j;i++)
        {
        fact = fact*i;
        }
        sum = sum + fact;
        n = n/10;
    }

    if(sum == x)
    {
        printf("The number is a strong number.\n");
    }

    else
    {
        printf("The number is not a strong number.");
    }

    return 0;
}