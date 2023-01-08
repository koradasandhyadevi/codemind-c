#include<stdio.h>
int main()
{
    int a,b,i,gcd=0,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("%d",lcm);
}