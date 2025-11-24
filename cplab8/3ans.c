#include <stdio.h>
void check_magic(int n) {
int  sum=0, reverse=0,z, y,o;

o=n;
do {
	z=n%10;
	sum+=z;
	n=n/10;
} while (n>=1);

y=sum;
while (y>=1)
{
	z=y%10;
	reverse= reverse*10+ z;
	y=y/10;
}
if (reverse*sum==o)
	printf("magic no\n");

else
	printf("nope\n");
}

void main() {
int n;
printf("Enter the number you want to check: ");
scanf("%d", &n);
check_magic(n);
}
