#include<stdio.h>
int main()
{
    int n,d,rev=0,q;
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
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}