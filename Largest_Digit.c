#include<stdio.h>
int main()
{
    int r,n,l=0;
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        if(l<r)
    {
    l=r;
    }
    n=n/10;
    }
    printf("%d",l);
    
}
