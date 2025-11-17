#include <stdio.h>
#define M 3

void main () {
float salary[M], ordered_salary[M]={0};
int i,j=0;
float hra,allow;
for (i=0;i<M;i++) {
	printf("enter basic salary of employee %d: ", i+1);
	scanf("%f", &salary[i]);
	printf("Hra =%.2f\n",hra=0.4*salary[i]);
	printf("special allowance =%.2f\n",allow=0.25*salary[i]);
	salary[i] = salary[i]+hra+allow;
	printf("total =%.2f\n\n", salary[i]);
	}

float max=salary[0];
int max_i;
printf("Salaries in descending order:\n");
while (ordered_salary[M-1]==0) {
	for (i=0;i<M;i++) {
		if (salary[i]>max) {
			max=salary[i];
			max_i=i;
		}
	}
ordered_salary[j]=max;
printf("%.2f\n", ordered_salary[j]);
salary[max_i]=0;
max=0;
j++;
}
}
