#include<stdio.h>
int main()
{
    int n,d,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
        if(n==0 && s>=10)
        {
            n=s;
            s=0;
        }
    }
    printf("%d",s);
}