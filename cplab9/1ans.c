#include <stdio.h>
#include <string.h>

void main() {
char first[60], middle[20], last[20];

//fgets(first, sizeof(first) , stdin);

printf("enter first name: ");
gets(first);

printf("enter middle name: ");
gets(middle);

printf("enter last name: ");
gets(last);


strcat(first, " ");
strcat(first, middle);
strcat(first, " ");
strcat(first, last);

printf("%s\n", first);
}
