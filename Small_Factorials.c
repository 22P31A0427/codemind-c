#include<stdio.h>
void fact(int n,int m)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
        printf("%d
",f);
}
int main()
{
    int m,i;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int n;
        scanf("%d",&n);
        fact(n,m);
    }
}