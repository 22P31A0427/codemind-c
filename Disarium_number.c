#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,d,s=0,q;
    scanf("%d",&q);
    n=q;
    while(n!=0)
    {
        r=n%10;
        d=log10(n)+1;
        n=n/10;
        s=s+pow(r,d);
    }
    if(q==s)
    printf("True");
    else
    printf("False");
}