#include <stdio.h>
#include <math.h>
void main() {
int n, i=1, sum=0, reverse=0;
float z, y;


printf("enter the number: ");
scanf("%d", &n);
z=n;
do {
	if (z>n) {
		break;
	}
	if (z<10) {
		sum = sum + (int)z;
		z = z - (int)z;
		z = z*10;
		continue;
	}
	z = n * pow(10,-1);
	printf("hi");
} while (1<2);

y=sum;
do {
	if (y>sum) {
		break;
	}
	if (y<10) {
		reverse = reverse + (int)z*((int)pow(10,i));
		z = z - (int)z;
		z = z*10;
		i--;
		continue;
	}
	i++;
	z = n/10;
} while (1<2);

if (sum*reverse==n) {
	printf("magic no");
}
else {
	printf("nope");
}

}
