//pattern 2
//Written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter last row number of your series: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        j = i;
        while (j > 0) {
            printf("%d ", j);
            j--;
        }
        printf("\n");
        i++;
    }

    return 0;
}
