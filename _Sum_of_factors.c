#include<stdio.h>
int main()
{
    int n,sum=0,a,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        a=n%i;
        if(a==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}