//Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>
int main() {
    int h, fact, i, j;
    for (i=1; i<=5; i++) {
        printf("\n\nEnter %d number  = ", i);
        scanf("%d", &h);
        fact = 1;

        for (j=1; j<=h; j++) {
            fact = fact * j;
        }
        printf("Factorial of %d is = %d", h, fact);
    }
    return 0;
}
