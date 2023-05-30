#include<stdio.h>
int main()
{
    int n,k,m,s;
    scanf("%d%d%d",&n,&k,&m);
    s=m*k;
    if(n%s==0)
    {
        printf("%d",n/s);
    }
    else
    {
        printf("%d",n/s+1);
    }
}