#include<stdio.h>
int main()
{
    int n;
    float b,sc,t;
    scanf("%d",&n);
    if(n<199)
    b=n*1.20;
    else if(n>=200&&n<400)
    b=n*1.50;
    else if(n>=400&&n<600)
    b=n*1.80;
    else
    b=n*2.00;
    if(b>400)
    {
    sc=b*0.15;
    t=sc+b;
    }
    else
    {
    sc=100;
    t=sc+b;
    }
    {
    printf("%0.2f",t);
    }
    
}