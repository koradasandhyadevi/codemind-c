#include<stdio.h>
int main()
{
    int n,q,rev=0,d;
    scanf("%d",&n);
    q=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==q)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}