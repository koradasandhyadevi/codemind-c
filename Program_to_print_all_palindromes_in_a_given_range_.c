#include<stdio.h>
int main(){
    int a,b;
    scanf("%d
%d",&a,&b);
    int i;
    for(i=a;i<=b;i++){
        int rev = 0,s,d;
        s = i;
        while(s > 0){
            d = s % 10;
            rev = rev * 10 + d;
            s = s / 10;
        }
        if (rev == i){
            printf("%d ",i);
        }
    }
}