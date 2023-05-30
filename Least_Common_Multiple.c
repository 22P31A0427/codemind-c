#include<stdio.h>
int main()
{
    int n,m,i,c;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        if(i*n%m==0)
        {
            c=0;
            break;
        }
    }
    if(c==0)
    printf("%d",i*n);
}