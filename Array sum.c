#include<stdio.h>
int main()
{
    int n[5],i,s=0;
    FILE *file;
    printf("Enter 5 intiger numbers seperated by comma=");
    for(i=0;i<=4;i++){
    scanf("%d,",&n[i]);}
    for(i=0;i<=4;i++)
    {
        s=s+n[i];
    }
    printf("Sum of results=%d\n",s);
}
