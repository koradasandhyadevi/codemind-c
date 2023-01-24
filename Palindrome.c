#include<stdio.h>
int main()
{
    int t,n,d,rev=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(t==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}