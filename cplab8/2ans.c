#include <stdio.h>

void print_factors(n) {
int i;
	for (i=1;i<=n;i++) {
		if (n%i==0) {
			printf("%d ", i);
		}
	}
}

void main() {
int n;
printf("enter the number: ");
scanf("%d", &n);
printf("Factors= ");
print_factors(n);

}
