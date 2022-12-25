#include<stdio.h>
int main()
{
    int n,d,s=0,q,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        p=p*d;
        s=s+d;
        n=n/10;
    }
    q=p-s;
    printf("%d",q);
}