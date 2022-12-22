#include<stdio.h>
int main()
{
    int n;
    double s=0.0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+1/i;
    }
    
    printf("%0.2lf",s);
}