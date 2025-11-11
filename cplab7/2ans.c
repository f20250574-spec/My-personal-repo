#include <stdio.h>
#define N 3
#define M 3

void main () {
int arr[M][N];
int i,sum;
for (i=0;i<M;i++) {
	printf("enter the values of row %d: ", i+1);
	scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
}

for (i=0;i<M;i++) {
	sum = arr[i][0] + arr[i][1] + arr[i][2];
	printf("sum of row %d is %d\n", i+1, sum);
	sum = arr[0][i]+ arr[1][i]+arr[2][i];
	printf("sum of column %d is %d\n", i+1, sum);
}
}
