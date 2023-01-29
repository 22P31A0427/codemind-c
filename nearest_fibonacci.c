#include<stdio.h>
int main()
{
    int n,a=1,b=1,c;
    scanf("%d",&n);
    c=a+b;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
        
    }
    if(c-n<n-b)
    {
    printf("%d",c);
}
else if(c-n>n-b)
{
    printf("%d",b);
}
else
{
    printf("%d %d",b,c);
}
}