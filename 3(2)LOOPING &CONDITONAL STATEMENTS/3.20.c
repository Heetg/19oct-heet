#include <stdio.h>
int main() {
    int i,j,n;
    for (i=0; i<5; i++){
        for (j=1; j<=10; j++){
            n = i * 10 + j;
            printf("%02d ", n);
        }
        printf("\n");
    }
    return 0;
}
