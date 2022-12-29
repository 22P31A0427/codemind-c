#include<stdio.h>
int main()
{
    int n,i,q,t,s=0,m=0,r,a;
    scanf("%d",&n);
    i=n*n;
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    a=s*s;
    t=a;
    while(t!=0)
    {
        m=m*10+(t%10);
        t=t/10;
    }
    if(m==i)
    printf("True");
    else
    printf("False");
}