#include<stdio.h>
void p(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    p(n);
}