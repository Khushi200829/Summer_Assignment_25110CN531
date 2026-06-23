#include<stdio.h>
#include<math.h>

int main()
{
    int rem , n , i=0 , decimal = 0 ;

    printf("Enter a Binary number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n%10;
        decimal = decimal+rem*pow(2,i);
        n = n/10;
        i++;

    }

    printf("Decimal = %d",decimal);

    return 0;

}