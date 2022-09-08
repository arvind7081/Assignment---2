/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD.
*/
#include<stdio.h>
int main()
{
    float inr,usd;
    printf("Enter a Indain Rupees : ");
    scanf("%f",&inr);
    usd = inr/76.3;
    printf("convert INR into USD = %.2f",usd);
    return 0;
}