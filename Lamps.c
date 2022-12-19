#include<stdio.h>
int main()
{
    int z,w,a,b,m,n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
   z=(n-k)*y;
   w=(n-k)*x;
   if(z>w)
   {
       a=k*x+w;
       printf("%d",a);
   }
   else
   {
       b=k*x+z;
       printf("%d",b);
   }
}