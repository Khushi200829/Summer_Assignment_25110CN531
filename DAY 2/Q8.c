#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,rem=0,x;
    printf("Enter a number: ");
    scanf("%d",&num);
    x=num;

    while(num!=0)
    {
        n=num%10;
        rem=rem*10+n;
        num=num/10;

    }
    printf("Reverse of %d is %d \n",x,rem);

    if(rem!=x)
    {
        printf("The number is not palindrome");
    }
    else {
        printf("The number is palindrome");
    
    }

    return 0;

}