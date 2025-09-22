#include <stdio.h>

void main() {

float principal,rate,time,interest;
printf("enter the principal:");
scanf("%f", &principal);
printf("enter the rate");

scanf("%f", &rate);
printf("enter the time");

scanf("%f", &time);

interest = (principal*rate*time)/100;

printf("total interest is %.2f", interest);
}
