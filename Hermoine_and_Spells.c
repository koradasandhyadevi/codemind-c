#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<c&&a<b)
    {
        printf("%d",b+c);
    }
    else if(b<a&&b<c)
    {
        printf("%d",a+c);
    }
    else
    {
        printf("%d",a+b);
    }
}