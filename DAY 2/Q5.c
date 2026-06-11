#include<stdio.h>
int main()
{
    int n,sum=0,digit,num;

    printf("Enter the number: \n");
    scanf("%d",&n);
    num=n;

    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }

       printf("Sum of the digits of %d is %d",num,sum); 

    

     return 0;

}