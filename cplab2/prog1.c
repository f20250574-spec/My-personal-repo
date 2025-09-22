#include <stdio.h>

void main() {

	int num;
	printf("enter the number\n");
	scanf("%d", &num);
	if (num>32 && num < 127) {
		printf("%c\n", num);
	}
	else {
	printf("enter a int value in the proper range\n");
	}

}
