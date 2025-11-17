#include <stdio.h>

void print_color(char letter) {
	switch (letter){
	case 'V': case 'v': printf("Violet");break;
	case 'I': case 'i': printf("Indigo");break;
	case 'B': case 'b': printf("Blue");break;
	case 'G': case 'g': printf("Green");break;
	case 'Y': case 'y': printf("Yellow");break;
	case 'O': case 'o': printf("Orange");break;
	case 'R': case 'r': printf("Red");break;
	default: printf("Color not present");
	}
}

void main() {
char c;
printf("Enter input character: ");
scanf("%c", &c);
print_color(c);
printf("\n");
}
