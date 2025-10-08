#include <stdio.h>
void main() {

int i,n,a=1,b=0, t;
printf("enter n: ");
scanf("%d", &n);
for (i=1; i<=n; i++) {

t= a+b;
printf("%d\n", t);

b=a;
a=t;

}

}
