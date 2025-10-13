#include <stdio.h>

int main() {

    int i,j,a,b,n;
    float av;
    printf("enter number of students: ");
    scanf("%d", &a);
    printf("enter number of subjects: ");
    scanf("%d", &b);

    for (i=1;i<=a;i++) {
	av=0;
        printf("Enter marks for student %d: ", i);
        for (j=1;j<=b;j++){
            scanf("%d", &n);
            av+=n;
        }
        av/=b;
        printf("Percentage for student %d: %.2f%%\n", i,av);
    }
return 0;
}
