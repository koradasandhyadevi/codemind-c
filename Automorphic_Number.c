#include<stdio.h>
int main()
{
    int n,sq,c=0,k=0,i,j;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        i=n%10;
        c++;
        n=n/10;
    }
    while(sq>0)
    {
        j=sq%10;
        k++;
        sq=sq/10;
        if(c==k)
        {
            break;
        }
    }
    if(i==j)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}