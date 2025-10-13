#include <stdio.h>
 int main() {
    int i,j,n,p;
    printf("enter number: ");
    scanf("%d", &n);

    for (i=2;i<=n;i++) {
        p=1;
        for (j=2;j<=n;j++){
            if (i%j==0 && i!=j) {
                p=0;
                break;
            }
        }
        if (p) {
            printf("%d is a prime no\n", i);
        }
    }


    return 0;
 }
