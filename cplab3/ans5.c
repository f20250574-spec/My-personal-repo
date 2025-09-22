#include <stdio.h>

void main() {
char choice;
printf("! for red\n@ for yellow\n# for blue\n$ for violet\n* for green\n^ for indigo\n& for orange\n");
scanf("%c",&choice);
switch (choice) {
	case '!': printf("red");
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
