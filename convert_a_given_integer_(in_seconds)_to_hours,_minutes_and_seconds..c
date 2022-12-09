#include<stdio.h>
int main()
{
    int h,m,s,a;
    scanf("%d",&a);
    h=(a/3600);
    m=(a-h*3600)/60;
    s=a-(h*3600+m*60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}