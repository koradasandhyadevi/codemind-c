#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    if(n<=0 || n>10000){
        printf("The Number Series is Not Possible Print");
    }
    else{
    for(i=1;i<=n;i++){
        printf("%d ",i);
    }
    }
}