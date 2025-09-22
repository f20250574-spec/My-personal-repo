#include <stdio.h>

void main() {

float basic, total,hra, allowance;
printf("enter the basic salary:");
scanf("%f", &basic);
hra =0.4*basic;
printf("enter the allowance");

scanf("%f", &allowance);

total = hra+allowance+basic;

printf("total salary is %f", total);
}
