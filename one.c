// 1. Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int num,unit_digit;
    printf("Enter a number : ");
    scanf("%d",&num);
    unit_digit=num%10;
    printf("%d of unit digit is %d ",num,unit_digit);
    return 0;
}