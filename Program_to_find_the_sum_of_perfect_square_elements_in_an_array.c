#include<stdio.h>
int main()
{
    int n,s=0,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<=n;j++)
    if(j*j==a[i])
    s=s+a[i];
    }
    printf("%d",s);
}