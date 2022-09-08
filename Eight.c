/* 8. Write a program to check whether the given number is even or odd using a bitwise 
operator. */
#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter a number to check even or odd using bitwise operator : ");
    scanf("%d",&num);
    result = num&1;
    if(result == 1)
    {
        printf("%d is Odd Number",num);
    }
    else
    {
        printf("%d is Even Number",num);
    }
    return 0;
}
