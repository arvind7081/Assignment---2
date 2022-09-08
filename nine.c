// 9. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int i,c,f,d;
    i=sizeof(int);
    c=sizeof(float);
    f=sizeof(char);
    d=sizeof(double);
    printf("size of int %d\n",i);
    printf("size of float %d\n",c);
    printf("size of char %d\n",f);
    printf("size of double %d\n",d);
    return 0;
}