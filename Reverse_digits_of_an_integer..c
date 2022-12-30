#include<stdio.h>
int main()
{
    int n,rev=0,d,q;
    q=n;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
        printf("%d",rev);
}