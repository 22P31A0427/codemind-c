#include<stdio.h>
void p(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",i+1);
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