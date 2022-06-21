//use #define to determine area of circle
//Written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>
#define PI 3.1426

int main() {
    float radius, area;

    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle is: %.2f\n", area);

    return 0;
}
