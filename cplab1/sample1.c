#include <stdio.h>

void main() {

int a,b,c,d,e;
printf("enter marks of subjects 1, 2 ,3, 4, 5:\n");
scanf("%d\n %d\n %d\n %d\n %d", &a, &b, &c, &d, &e);

int average= (a+b+c+d+e)/5;

printf("The average marks obtained is %d\n", average);

float percentage= (a+b+c+d+e)/5;


printf("The aggregate percentage obtained is %.2f%%\n", percentage);
}
