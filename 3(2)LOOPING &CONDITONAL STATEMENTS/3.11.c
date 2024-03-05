//Accept 5 names from user
#include <stdio.h>
int main() {
    char name[5] [50];
    int i;
    for (i=0; i<5; i++)
    {
        printf("Enter %d name = ", i + 1);
        scanf("%s", name[i]);
    }
    for (i=0; i<5; i++) {
        printf("\n%s", name[i]);
    }
    return 0;
}
