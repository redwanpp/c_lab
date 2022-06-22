//calculate sum of all digit
//written by Md. Amanullah Aman
//ID: 221-35-820

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
