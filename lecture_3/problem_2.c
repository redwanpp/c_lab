//finding even or odd
//Written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number to cheak: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even\n", num) : printf("%d is odd.\n", num);

    return 0;
}
