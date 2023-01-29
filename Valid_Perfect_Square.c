#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        int n,c=0,i;
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            if(n==i*i)
            {
                c+=1;
                printf("True");
                break;
            }
        }
        if(c==0)
        printf("False");
        printf("
");
    }
}