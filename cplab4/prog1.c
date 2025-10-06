#include <stdio.h>
void main() {
int n, i;
printf("enter the number: ");
scanf("%d", &n);
for (i=2; i<7; i++) {
	if (n%i==0) {
		break;
	}
}
if (n>1 && n==i) {
	printf("Prime No.\n");
} else {
	printf("Not a prime\n");
}

}

