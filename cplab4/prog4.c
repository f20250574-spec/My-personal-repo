#include <stdio.h>
void main() {

int i,n,a,b;
printf("enter n: ");
scanf("%d", &n);
a=1;
for (i=1; i<=n; i++) {
b=a;
a= a+b;
printf("%d", b);
}

}
