#include <stdio.h>

void main() {

int a,b,c,d,e;
printf("enter subj 1\n");
scanf("%d", &a);
printf("enter subj 2\n");
scanf("%d", &b);
printf("enter subj 3\n");
scanf("%d", &c);
printf("enter subj 4\n");
scanf("%d", &d);
printf("enter subj 5\n");
scanf("%d", &e);

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

