#include <stdio.h>
#include <string.h>

void main() {

char s[100];
printf("enter the string: ");
gets(s);
char *p=s;

int l= strlen(s), i, vow=0, cons=0;

for (i=0;i<l;i++,p++) {
	if (*p== 'a' ||*p== 'A' ||*p== 'e' ||*p== 'E' ||*p== 'i' ||*p== 'I' ||*p== 'o' ||*p== 'O' ||*p== 'u' ||*p== 'U') vow++;
	else if (*p>='A' && *p<='Z' || *p>='a' && *p<='z') cons++;
	}

	printf("no of vowels= %d\n", vow);
	printf("no of consonants= %d\n", cons);

}
