#include<stdio.h>
long long fact (int num);
int main()
{
	 int num;
     long long factorial;
     printf("Enter a integer number=");
     scanf("%d",&num);
     factorial=fact(num);
     printf("Factorial of %d is=%lld\n",num,factorial);
     return 0;
            }
    long long fact (int num)
   {
    if(num==0)
    return 1;
    else
     return num*fact (num-1);
                                 }
