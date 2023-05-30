#include<stdio.h>
int main()
{
    int n,k;
    while(n!=0)
    {
        scanf("%d",&n);
        if(n==-1)
        break;
        k=n*n;
        printf("%d
",k);
    }
}