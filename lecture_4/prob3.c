//Even odd
//Written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>

int main () {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 != 1) {
        printf ("%d is even\n", num);
    }
    else {
        printf("%d is odd\n", num);
    }

    return 0;
}
