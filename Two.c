// 2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int num,last_digit;
    printf("Enter a number : ");
    scanf("%d",&num);
    last_digit=num/10;
    printf("%d without last digit %d",num,last_digit);
    return 0;
}