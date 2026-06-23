#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,result=1,i;

    printf("Enter a number: ");
    scanf("%d",&x);

    printf("Enter the power : ");
    scanf("%d",&n); 
      
    for(i=1;i<=n;i++)
    {
        result = result*x;

    }
    
    printf("result = %d",result);

    return 0;

}