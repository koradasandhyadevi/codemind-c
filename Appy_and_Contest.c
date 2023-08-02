#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,x,a,b,c,d;
    for(i=0;i<n;i++){
        scanf("%d%d%d%d",&a,&b,&c,&d);
    x = a/b + a/c;
    if(x>=d){
        printf("Win");
    }
    else{
        printf("Lose");
    }
    printf("
");
    }
    
}