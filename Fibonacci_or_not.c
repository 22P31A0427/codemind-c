#include<stdio.h>
int main()
{
    int n,c,a=0,b=1,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        if(c==n)
        {
            s+=1;
            printf("True");
        }
      }
    if(s==0)
    {
    printf("False");
}
}