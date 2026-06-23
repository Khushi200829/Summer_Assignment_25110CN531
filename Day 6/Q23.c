#include<stdio.h>
#include<math.h>
int main()
{
    int  n , count=0;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0) 
    {
        if(n%2 == 1)
        {
            count++;

        }

        n = n/2;

    }

    printf("No. of set Bits : %d",count);
  

    return 0;

}