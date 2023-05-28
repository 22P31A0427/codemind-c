#include<stdio.h>
int main()
{
    int n,m,i,j,f;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        f=0;
        for(j=2;j<=i/2;++j)
        {
    if(i%j==0)
        {
        f=1;
        break;
        }
    }
    if(f==0)
    printf("%d
",i);
    }
    return 0;
}