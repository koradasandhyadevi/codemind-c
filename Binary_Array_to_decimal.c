#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],p,x = 0;
    p = n - 1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i] == 1)
        {
            x+=(1 << p);
            p--;
        }
        else{
            p--;
        }
    }
    printf("%d",x);
}