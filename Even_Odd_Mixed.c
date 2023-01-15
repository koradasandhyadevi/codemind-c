#include<stdio.h>
int main()
{
    int n,c=0,j=0,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d%2==0)
        {
            c++;
        }
        else
        {
            j++;
        }
        n=n/10;
    }
    if(c>0&&j==0)
    {
        printf("Even");
    }
    else if(j>0&&c==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}