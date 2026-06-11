#include<stdio.h>
int main()
{
    int n,num,rem=0,x;

    printf("Enter the number:");
    scanf("%d",&num);
    x=num;

    while(num!=0)
    {
        n =num%10;
        rem =(rem*10+n);
        num =num/10;
    }
    printf("Reverse of %d is %d",x,rem);
    return 0;
}