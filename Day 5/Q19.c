#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Factors of the number : ");

    for( i = 1 ; i<=n ; i++)
    {   

       if(n % i == 0)
        {
          printf("%d ,  ",i);
        }
    
    }

    return 0;

}