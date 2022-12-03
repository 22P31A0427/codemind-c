#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,c,ci;
    scanf("%f%f%f",&p,&r,&t);
    ci=p*pow(1+(r/100),t);
    c=ci-p;
    printf("%0.2f",c);
}