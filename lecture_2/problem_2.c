//Program to make average
//written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>

int main() {
    float num1, num2, num3, avg;

    printf("Please enter three floating number here: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    avg = (num1 + num2 + num3) / 3;

    printf("Average of: %.2f, %.2f and %.2f is: %.2f\n", num1, num2, num3, avg);

    return 0;
}
