#include<stdio.h>
#include<math.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n/100000000!=0&&log10(n)+1!=0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}