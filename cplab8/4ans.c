#include <stdio.h>
#include <limits.h>

void sort(int arr[10]) {
	int i,j;
	int min=arr[0];
	int min_i;
	printf("Elements in ascending order:\n");
	for (j=0; j<10; j++) {
		for (i=0;i<10;i++) {
			if (arr[i]<min) {
				min=arr[i];
				min_i=i;
			}
		}
		printf("%d\n", arr[min_i]);
		arr[min_i]=INT_MAX;
		min=INT_MAX;
		i++;
	}
}

void main() {
	int arr[10] = {10,32,53,46,58,61,8,97,32,88};
	sort(arr);
}
