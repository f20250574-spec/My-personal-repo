#include <stdio.h>

void main() {

char ch;
printf("enter a character");
scanf("%c", &ch);

switch(ch) {
	case 'a': 	case 'A':
	case 'e':	case 'E':
	case 'i':	case 'I':
	case 'O':	case 'o':
	case 'U': 	case 'u':

		printf("Vowel");
		break;
	default:
		if ((ch>='a' && ch<='z') || (ch>='A'&&ch<='Z')) {	
			printf("consonant");
		} else {
		printf("Not an alphabet");
		}
}

}
