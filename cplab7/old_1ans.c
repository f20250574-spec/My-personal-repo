#include <stdio.h>
#define M 3
#define N 4

void main () {
float salary[M][N], ordered_salary[M]={0};
int i,j=0;
for (i=0;i<M;i++) {
	printf("enter basic salary of employee %d: ", i+1);
	scanf("%f", &salary[i][0]);
	printf("Hra =%.2f\n",salary[i][1] =0.4*salary[i][0]);
	printf("special allowance =%.2f\n",salary[i][2] =0.25*salary[i][0]);
	printf("total =%.2f\n\n",salary[i][3] = salary[i][0]+salary[i][1]+salary[i][2]);
	}

float max=salary[0][3];
int max_i;
printf("Salaries in descending order:\n");
while (ordered_salary[M-1]==0) {
	for (i=0;i<M;i++) {
		if (salary[i][3]>max) {
			max=salary[i][3];
			max_i=i;
		}
	}
ordered_salary[j]=max;
printf("%.2f\n", ordered_salary[j]);
salary[max_i][3]=0;
max=0;
j++;
}
}
