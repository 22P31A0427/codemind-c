#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,p,l,r=0,di,f=0,q;
    scanf("%d%d",&a,&b);
    p=pow(10,b);
    l=a%p;
    while(a>0)
    {
        r=r*10+a%10;
        a=a/10;
    }
    q=r%p;
    while(q>0)
    {
        f=f*10+q%10;
        q=q/10;
    }
    di=abs(l-f);
    printf("%d",di);
}