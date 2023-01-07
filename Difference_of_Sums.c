#include<stdio.h>
int main()
{
    int n,i,sum=0,sum1=0,sq;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    for(i=1;i<=n;i++)
    {
        sum1=sum1+i;
    }
    sq=sum1*sum1;
    printf("%d",sq-sum);
}