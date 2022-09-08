// 3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swap the Value of a and b is a = %d and b = %d ",a,b);
    return 0;
}