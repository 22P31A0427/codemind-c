#include<stdio.h>
int main()
{
    int n,m,i,r,s;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        r=i*i;
        s=i*i*i;
    printf("%d %d %d
",i,r,s);
}
}