#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,q,sum=0,w;
    scanf("%d",&n);
    d=log10(n)+1;
    w=n;
   while(n>0)
    {
        q=n%10;
       sum=sum+pow(q,d); 
        n=n/10;
        d--;
    }
   if(sum==w)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}