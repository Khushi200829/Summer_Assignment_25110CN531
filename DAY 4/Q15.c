#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,count=0,p,calc=0,x;

    printf("Enter a number: ");
    scanf("%d",&n);

    x=n;

    
    while(n!=0)
    { 
        n=n/10;
        count++;
    }
    //power of the number
    p=count;

    printf("p = %d \n",p);

    n=x;


    while(n!=0)
    {
        a = n%10;
        calc = calc + (int)(pow(a,p)+0.5) ;
        n = n/10;
    }
    //calculation of armstrong number
     printf("calc = %d \n ",calc);
     printf("x = %d \n",x);
    if(calc==x)
    {
        printf("The number is armstrong's number.");
    
    }
    else
    {
       printf("The number is not an armstrong's number.");

    }

    return 0;
}