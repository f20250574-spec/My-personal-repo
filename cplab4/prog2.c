#include <stdio.h>
void main() {
int n, sum=0, reverse=0,z, y,o;


printf("enter the number: ");
scanf("%d", &n);
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