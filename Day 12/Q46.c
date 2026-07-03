#include<stdio.h>
#include<math.h>

int armstrong(int n)
{
    int temp, rem, count = 0, sum = 0;

    temp = n;

    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}