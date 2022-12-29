#include<stdio.h>
int hr(int n)
{
    int r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r);
        n=n/10;
    }
    return s;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=n;
    while(m!=1&&m!=4)
    {
        m=hr(m);
    }
        if(m==1)
        printf("True");
        else
        printf("False");
    }

