#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=a[0];
    for(i=0;i<n;i++)
    {
    if(m<a[i])
    {
        m=a[i];
    }
}
printf("%d",m);
}