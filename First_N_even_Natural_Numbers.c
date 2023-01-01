#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        int a;
        a=2*i;
        printf("%d ",a);
    }
}