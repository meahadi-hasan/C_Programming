#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter fahrenheit  degree:");
    scanf("%f",&F);
    C= (F-32)*5/9;
    printf("Celsius degree is:%.2f",C);
    return 0;
}


