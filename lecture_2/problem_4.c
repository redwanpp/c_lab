//temperature converter
//written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>

int main() {
    float fahrenheit, celcious;

    printf("Please enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcious = (5 * (fahrenheit - 32)) / 9;

    printf("%.2f degree fahrenheit = %.2f degree celcious\n", fahrenheit, celcious);

    return 0;
}
