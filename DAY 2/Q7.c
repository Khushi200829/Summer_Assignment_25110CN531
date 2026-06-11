#include<stdio.h>
#include<math.h>
int main()
{
    int product=1,n,num;

    printf("Enter the number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        n=num%10;
        product=product*n;
        num=num/10;

    }
    printf("Product of the digits of the number is %d",product);

    return 0;

}