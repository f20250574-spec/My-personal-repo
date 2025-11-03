#include <stdio.h>

int checkidentical(int Arr1[10],int Arr2[10]) {
	int i, identical =1;
	for (i=0; i<10; i++) {
		if (Arr1[i]!=Arr2[i]) {
			identical=0;
			break;
		}
	}
	if (identical) printf("Identical\n");
	else printf("Not identical\n");
	return 0;
}


void main () {
	int Arr1[10]={34,56,78,87,95,45,84,18,94,75}, Arr2[10]={34,56,78,87,95,45,84,18,94,75};
	checkidentical(Arr1, Arr2);
}


