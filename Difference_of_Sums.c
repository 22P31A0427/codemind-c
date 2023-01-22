#include<stdio.h>
int main()
{
    int n,i,r=0,s,sq=0,m,a;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s=i*i;
        r=s+r;
        sq=sq+i;
        m=sq*sq;
        a=(m-r);
    }
    printf("%d",a);
}