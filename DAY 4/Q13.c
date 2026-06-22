#include<stdio.h>
#include<math.h>
int main()
{
    int a=0,b=1,c,n,i ;
    printf("Enter the number of terms in the series: ");
    scanf("%d",&n);

    printf("Fabonacci series: \n");

    if(n>=1)
    printf("%d ",a);

    if(n>=2)
    printf("%d ",b);
 
    for(i=3 ; i<=n ; i++)
    {
         c= a+b;
         
         printf("%d ",c);
         a=b;
         b=c;
    }
    
    return 0;

}