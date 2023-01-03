#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,s1=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            s1=s1+a[i];
        }
    }
    printf("%d",abs(s1-sum));
}