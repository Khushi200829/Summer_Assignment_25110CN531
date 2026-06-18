#include<stdio.h>
int main()
{
    int start,end,i,rem,n;

    printf("Enter the Starting number: ");
    scanf("%d",&start);

    printf("Enter the Ending number: ");
    scanf("%d",&end);

    for(i=start;i<=end;i++)
    {
        if(i <= 1)
        continue;

        rem = 1;

        for(n=2;n<i;n++)
        {
            rem = i % n;

            if(rem ==0)
            {
                break;
            }
        } 

        if(rem!=0)
        {
            printf("%d \n",i);
        }
    }

    return 0;

}