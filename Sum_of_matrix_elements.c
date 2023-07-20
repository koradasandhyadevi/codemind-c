#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int s[10][10],x = 0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&s[i][j]);
            x+=s[i][j];
        }
    }
    printf("%d",x);
}