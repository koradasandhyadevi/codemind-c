#include<stdio.h>
#include<math.h>
int main()
{
    int d,r,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    d=pow(a,b);
    r=d%c;
    printf("%d",r);
}