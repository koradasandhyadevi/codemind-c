#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a[n],avg,sum=0;
    for(i=0;i<n;i++)
    {
    scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
  
    avg=sum/n;
    printf("%0.2f",avg);
}