#include <stdio.h>

void sort(int arr[], int l) {
	int i,j,temp;
	printf("output array: ");
	for (i=0; i<l-1; i++) {
		for (j=i+1;j<l;j++) {
			if (arr[j]<arr[i]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void main() {
	int i, arr[10] = {10,32,53,46,58,61,8,97,32,88};
	sort(arr, sizeof(arr)/sizeof(arr[0]));
	for (i=0;i<10;i++) {
	printf("%d ", arr[i]);
	}
	printf("\n");
}
