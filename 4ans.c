#include <stdio.h>
#include <string.h>
void palindrome(char inputString[], int length)
{
   int flag=1;
    // Initialize leftIndex and rightIndex to first and last character of input string
	char *leftIndex= inputString;
	char *rightIndex= &inputString[length-1];

    /* Compare left and right characters, If equal then continue otherwise not a palindrome */
    while(leftIndex < rightIndex){
        // do the functionality
	if (*leftIndex != *rightIndex)
		flag=0;
	
        leftIndex +=1;
        rightIndex -=1;
    }
    if(flag==1)
    printf("%s is a Palindrome \n", inputString);
	else printf("not a palindrome");
}
 
int main(){
    char inputString[100]; // declare a String
    printf("Enter a string for palindrome check\n");
    scanf("%s", inputString); // input the string
	int length= strlen(inputString);
// call palindrome function
    palindrome(inputString, length);
    return 0;
}

