#include <stdio.h>

void main() {
char mychar;
printf("enter lowercase character bro\n");
scanf("%c", &mychar);
if (mychar=='a' || mychar=='e' || mychar=='i' || mychar=='o' || mychar=='u' /
    mychar=='A' || mychar=='E' || mychar=='I' || mychar=='O' || mychar=='U') {
printf("vowel\n");
}
else if ((int)mychar<=122 && (int)mychar>=65) {
printf("consonant\n");
}
else 
    printf("Ensure you entered an alphabet");

}
