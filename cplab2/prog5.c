#include <stdio.h>

void main() {
char mychar;
printf("enter lowercase character bro\n");
scanf("%c", &mychar);
if (mychar=='a' || mychar=='e' || mychar=='i' || mychar=='o' || mychar=='u') {
printf("vowel\n");
}
else {
printf("consonant\n");
}

}
