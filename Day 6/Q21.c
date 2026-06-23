#include<stdio.h>
int main()
{
    int n,arr[100],k=0,rem,i;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n%2;
        arr[k] = rem;
        k++;
        n = n/2;
    }
    
    printf("Binary number : ");
    for(i = k-1; i >=0; i--)
    {
        printf("%d",arr[i]);
    }

    return 0;
}