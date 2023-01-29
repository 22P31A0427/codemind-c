#include<stdio.h>
int main()
{
    int l,b,w,c,ai,ao,a,f;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ai=(l+(2*w))*(b+(2*w));
    ao=l*b;
    a=ai-ao;
    f=a*c;
    printf("%d",f);
}