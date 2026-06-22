#include<stdio.h>
int main()
{  int n,i,a=0,b=1,c;

    printf("Enter the nth term to be printed :  ");
    scanf("%d",&n);

    if(n==1)
    printf("%d",a);

    if(n==2)
    printf("%d",b);
    
    for(i=3;i<=n;i++)
    {
        c = a+b;
        a = b;
        b = c;
    
    if(i==n)
   {
     printf("%d ",c);
   } 

   }


  return 0;
}