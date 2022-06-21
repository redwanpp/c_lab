//calculate sum of all digit
//Written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>

int main() {
    int num, digit, sum;

    printf("Enter five digit number here: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("The summition is: %d\n", sum);

    return 0;
}
