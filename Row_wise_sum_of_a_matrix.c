#include<stdio.h>
int main()
{
    int c,r,i,j,a[10][10],s;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           scanf("%d",&a[i][j]); 
        }
    }
     for(i=0;i<r;i++)
    {
        s=0;
        {
            for(j=0;j<c;j++)
            {
                s=s+a[i][j];
            }
        }
       printf("%d ",s);   
    }
    
}