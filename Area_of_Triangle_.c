#include<stdio.h>
#include<math.h>
int main()
{
    float A,s,a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    A=s*(s-a)*(s-b)*(s-c);
    printf("%0.2f",sqrt(A));
}