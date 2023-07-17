#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter celsius degree:");
    scanf("%f",&C);
    F=((9*C)/5)+32;
    printf("Fahrenheit degree is:%.2f",F);
    return 0;
}

