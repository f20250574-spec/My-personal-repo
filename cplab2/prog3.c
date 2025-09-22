#include <stdio.h>

void main() {

int x,y;

printf("enter x\n");
scanf("%d", &x);
printf("enter y\n");
scanf("%d", &y);

if (x>0 && y>0) {
printf("pt is in Q1\n");
}
else if (x<0 && y>0) {
printf("pt is in Q2\n");
}
else if (x<0 && y<0) {
printf("pt is in Q3\n");
}
else if (x>0 && y<0) {
printf("pt is in Q4\n");
}
else if (x==0 || y==0) {
printf("pt lies on one of the axes\n");
}
else {
printf("pls check ur input values\n");
}

}
