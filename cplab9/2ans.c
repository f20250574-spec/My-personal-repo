#include <stdio.h>
#include <string.h>

void main () {
	char str1[20], str2[20];

	printf("enter string one and then string 2: ");

	gets(str1);
	gets(str2);

	int diff= strcmp(str1,str2);

	if (diff==0) printf("strings are equal");

	else if (diff<0) printf("string two is bigger");

	else if (diff>0) printf("string one is bigger");
}
