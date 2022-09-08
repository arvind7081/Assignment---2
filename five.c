// 5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    rem=num%10;
    num=num/10;
    sum=sum+rem;
    rem=num%10;
    num=num/10;
    sum=sum+rem;
    rem=num%10;
    num=num/10;
    sum=sum+rem;
    printf("Sum of three digit number is %d",sum);
}