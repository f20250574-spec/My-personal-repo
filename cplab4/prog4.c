#include <stdio.h>
void main() {

int i,n,a,b,t;
printf("enter n: ");
scanf("%d", &n);
b=0;
a=1;

for (i=1; i<=n; i++) {

    printf("%d\n", a);
    t =a+b;
    b=a;
    a=t;
}

}
