#include <stdio.h>
void main () {
int i, j, mylist[5], prime[5]={0}, p;
for (i=0; i<5; i++) {
	printf("Enter number %d: ", i+1);
	scanf("%d", &mylist[i]);
	p=1;
	for (j=2;j<mylist[i];j++) {
		if (mylist[i]%j==0) {
			p=0;
			break;
		}
	}
if (p) prime[i]= mylist[i];
}
for (i=0;i<5;i++) {
	if (prime[i]) {
		printf("element no. %d=%d is a prime\n", i, prime[i]);
	}

}
}
