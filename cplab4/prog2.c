#include <stdio.h>
void main() {
int n, i=1, sum=0, reverse=0,z, y;


printf("enter the number: ");
scanf("%d", &n);
do {
	z = n%(10*i);
	y= z - n%(10*(i-1));
	sum +=y;
	i++;
} while (1);

i=0;
while (z !=n) {
	i++;
	z = n%(10*i);
}
for (;i!=0;) {
	z=(n-n%(10*i-1))/(i-1);
	reverse += z;
}

if (sum*reverse==n) {
	printf("magic no");
}
else {
	printf("nope");
}

}
