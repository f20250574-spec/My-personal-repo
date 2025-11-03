#include <stdio.h>
void main () {
int i ,tot, student[6]= {77,36,12,34,98,50};
for (i=0; i<5; i++) {
	tot += student[i];
}

printf("Total is %d\n", tot);
}
