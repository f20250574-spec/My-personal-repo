#include <stdio.h>
 int main() {
    int i,j,n,p;
    printf("enter number: ");
    scanf("%d", &n);

    for (i=2;i<=n;i++) {
        printf("Factors of %d= ", i);
        for (j=1;j<i;j++){
            if (i%j==0) {
                printf("%d*", j);
            }
            
        }
        printf("%d", i);
        printf("\n");

    }


    return 0;
 }
