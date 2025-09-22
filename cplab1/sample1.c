#include <stdio.h>

void main() {

int a,b,c,d,e;
printf("enter subj 1 marks");
scanf("%d", &a);
printf("enter subj 2 marks");
scanf("%d", &b);
printf("enter subj 3 marks");
scanf("%d", &c);
printf("enter subj 4 marks");
scanf("%d", &d);
printf("enter subj 5 marks");
scanf("%d", &e);

int average= (a+b+c+d+e)/5;

printf("The average marks obtained is %d", average);

float percentage= (a+b+c+d+e)/5;


printf("The aggregate percentage obtained is %f%%", percentage);
}
