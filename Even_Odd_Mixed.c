#include<stdio.h>
int main()
{
    int n,r,i,m=0,e=0,o=0;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
    r=i%10;
    m++;
    if(r%2==0)
    e++;
    if(r%2!=0)
    o++;
    }
        if(m==e)
        printf("Even");
        else if(m==o)
        printf("Odd");
        else
        printf("Mixed");
}