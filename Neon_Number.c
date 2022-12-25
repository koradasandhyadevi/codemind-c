#include<stdio.h>
int main()
{
    int n,q,s=0,d;
    scanf("%d",&n);
    q=n*n;
    while(q!=0)
    {
        d=q%10;
        s=s+d;
        q=q/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}