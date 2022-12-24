#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    float s=0.00;
    for(i=a;i<=b;i++)
    {
        s=s+sqrt(i);
    }
    printf("%0.2f",s);
}