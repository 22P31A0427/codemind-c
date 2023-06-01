#include<stdio.h>
int main()
{
    int n,r,m=0,j,p,a,s=0;
    scanf("%d",&n);
    r=n*n;
    a=n;
    while(a!=0)
    {
        s=s*10+a%10;
        a=a/10;
    }
    p=s*s;
    j=p;
    while(j>0)
    {
        m=m*10+j%10;
        j=j/10;
    }
    if(m==r)
    printf("True");
    else
    printf("False");
}