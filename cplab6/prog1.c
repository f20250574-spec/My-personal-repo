#include <stdio.h>
void main () {
int i ,tot, student[5];
for (i=0; i<5; i++) {
	printf("Enter marks of subject %d: ", i+1);
	scanf("%d", &student[i]);
	tot += student[i];
}

printf("Total is %d\n", tot);
float perc= tot/5.0;
printf("Percentage is %.2f\n", perc);
if (perc>=90)
	printf("Grade A\n");
else if (perc>=80)
	printf("Grade B\n");
else if (perc>=70)
	printf("Grade C\n");
else if (perc>=60)
	printf("Grade D\n");
else if (perc>=40)
	printf("Grade E\n");
else
	printf("Grade F\n");

}
