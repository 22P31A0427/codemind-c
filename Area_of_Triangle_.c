#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,s;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    d=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",d);
}