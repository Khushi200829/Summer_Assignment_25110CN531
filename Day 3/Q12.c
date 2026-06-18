#include<stdio.h>
int main()
{
    int num1,num2,i,GCD,LCM;

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    for(i=1;i<=num1 && i<=num2;i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        }
    }
    
    {
        LCM = (num1*num2)/GCD;
    }

    printf("LCM = %d" , LCM);

    return 0;

}