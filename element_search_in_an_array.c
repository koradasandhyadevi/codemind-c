#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    int m;
    scanf("%d",&m);
        if(m==a[i])
        {
            c++;
        }
    }
        if(c>0)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}