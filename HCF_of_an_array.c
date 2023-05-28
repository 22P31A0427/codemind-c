#include<stdio.h>
int main()
{
    int n,i,g;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    g=arr[0];
    int j=1;
    while(j<n)
    {
        if(arr[j]%g==0)
        {
            j++;
        }    
        else
        {
            g=arr[j]%g;
            i++;
        }
     }
printf("%d",g);
}