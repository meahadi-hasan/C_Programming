#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter any num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum is=%d\n",s);
}
