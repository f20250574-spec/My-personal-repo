#include <stdio.h>

void main() {

int x,y,c;

printf("enter number 1 and number 2:");
scanf("%d\n %d", &x, &y);
printf("enter the choice of operation\n1= addition\n2= subtraction\n3= multiplication\n4=division");
scanf("%d", &c);

switch (c) {
	case 1: printf("%d", x+y);
		break;
	case 2: printf("%d", x-y);
		break;
	case 3: printf("%d", x*y);
		break;
	case 4: printf("%d", x/y);
		break;
	default: printf("ensure you have entered valid integer values");
		break;
}

}
