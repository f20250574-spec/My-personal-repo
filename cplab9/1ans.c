#include <stdio.h>
#include <string.h>

void main() {
char first[20], middle[20], last[20];
printf("enter first name: ");
fgets(first, sizeof(first) , stdin);
printf("enter middle name: ");
fgets(middle, sizeof(middle), stdin);
printf("enter last name: ");
fgets(last, sizeof(last) , stdin);

strcat(first, middle);
strcat(first, last);
first[strcspn(first, "\n")] = ' ';
first[strcspn(first, "\n")] = ' ';

printf("%s", first);
}
