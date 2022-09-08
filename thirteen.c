/*13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right*/
#include<stdio.h>
int main()
{
    int num,x,y,rotate_number;
    printf("Enter three digit number : ");
    scanf("%d",&num);
    x=num%10;
    y=num/10;
    rotate_number=x*100+y;
    printf("%d",rotate_number);
    return 0;
}