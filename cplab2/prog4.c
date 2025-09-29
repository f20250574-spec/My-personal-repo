#include <stdio.h>

void main() {

int a,b,c,d,e;
printf("enter marks of subjects 1, 2 ,3, 4, 5:\n");
scanf("%d\n %d\n %d\n %d\n %d", &a, &b, &c, &d, &e);

int agg= (a+b+c+d+e)/5;

if (agg>80) {
printf("distinction\n");
}

else if (agg>=60) {
printf("first\n");
}

else if (agg>=45) {
printf("second\n");
}

else if (agg<45) {
printf("fail\n");
}

}

