#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
    }
   printf("%d",s);
}