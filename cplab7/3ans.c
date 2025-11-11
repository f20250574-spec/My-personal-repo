#include <stdio.h>

void main(){
int matrix[3][3]= {1,2,3,4,5,6,7,8,9};
int sum=0, i, j;
int n_rows=sizeof(matrix[0])/sizeof(matrix[0][0]);
int n_columns=sizeof(matrix)/sizeof(matrix[0]);
if (n_rows==n_columns) {
	printf("Valid\n");
	int i= n_rows -1;
	for (;i>=0;i--) {
		sum += matrix[i][i];
	}
	printf("sum of main diagonal elements: %d\n", sum);
	sum =0;
	for (i=0, j=n_rows-1;j>=0;i++,j--) {
		sum+=matrix[i][j];
	}
	printf("sum of opp diagonal elements: %d\n", sum);

}
else
	printf("invalid");
}
