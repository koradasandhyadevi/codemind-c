#include<stdio.h>
int main()
{
    int n,m=0,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(m<d)
        {
            m=d;
        }
        n=n/10;
    }
    printf("%d",m);
}