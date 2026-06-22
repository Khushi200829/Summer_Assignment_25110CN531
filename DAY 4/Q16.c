#include<stdio.h>
#include<math.h>

int main()
{
    int start, end;
    int n, x, a, count=0, p, calc=0,sum=0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    for(n = start; n <= end; n++)
    {
        sum = 0;
        count = 0;

        x = n;

        while(x != 0)
        {
            x = x / 10;
            count++;
        }

        x = n;

        while(x != 0)
        {
            a = x % 10;
            calc = (int)(pow(a, count) + 0.5);
            sum=sum+calc;
            x = x / 10;
        }

        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}