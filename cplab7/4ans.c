#include <stdio.h>
#define M 3
#define N 4
void main() {
int key,i,j;
int matrix[M][N]={1,4,5,8, 3,0,9,3, -2,-4,6,5};
printf("Enter the element to search for: ");
scanf("%d", &key);
printf("Element is present at locations: ");
for (i=0;i<M;i++) {
	for (j=0;j<N;j++) {
		if (matrix[i][j]==key)
			printf("[%d][%d] ", i,j);
}
printf("\n");
}



}
