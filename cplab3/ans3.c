#include <stdio.h>

void main() {
int choice;
printf("enter a digit 0-9");
scanf("%d",&choice);
switch (choice) {
	case 0: printf("red");
		break;
	case '#': printf("blue");
		break;
	case '@': printf("yellow");
		break;
	case '$': printf("violet");
		break;
	case '*': printf("green");
		break;
	case '^': printf("indigo");
		break;
	case '&': printf("orange");
		break;

	default:
		printf("invalid input");
		break;
}
}
