#include<stdio.h>
int main()
{
    int n,d,rev=0,rev1=0,sq1,sq,w;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    sq1=rev*rev;
    while(sq1>0)
    {
        w=sq1%10;
        rev1=rev1*10+w;
        sq1=sq1/10;
    }
    if(rev1==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}