#include<stdio.h>
int man(int n)
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
    int n,ram;
    scanf("%d",&n);
    ram=n;
    while(ram!=1&&ram!=4)
    {
        ram=man(ram);
    }
    if(ram==1)
    printf("True");
    else
    printf("False");
    
}