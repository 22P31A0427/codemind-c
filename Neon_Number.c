#include<stdio.h>
int main()
{
    int n,d,s=0,q;
    scanf("%d",&n);
    q=n*n;
    while(q!=0)
    {
        d=q%10;
        q=q/10;
        s=s+d;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}