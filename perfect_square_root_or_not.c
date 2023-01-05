#include<stdio.h>
int main()
{
    int i,c=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n==i*i)
        {
            printf("True");
            c+=1;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}