#include<stdio.h>
int main()
{
    int q,d,n,rev=0;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        d=q%10;
        rev=rev*10+d;
        q=q/10;
    }
    if(rev==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}