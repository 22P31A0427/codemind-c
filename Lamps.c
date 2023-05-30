#include<stdio.h>
int main()
{
    int n,k,x,y,s;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    s=k*x;
    if(x<y)
    {
        printf("%d",s+x*(n-k));
    }
    else
    {
        printf("%d",s+y*(n-k));
    }
}