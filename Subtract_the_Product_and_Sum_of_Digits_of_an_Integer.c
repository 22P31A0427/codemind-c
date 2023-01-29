#include<stdio.h>
int main()
{
    int n,s=0,d=1,r,m;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
        d=d*r;
        m=d-s;
    }
    printf("%d",m);
}