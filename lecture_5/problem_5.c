//finding factorial
//Written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>

int main() {
    int num, fact;

    printf("Please enter the of your factorial: ");
    scanf("%d", &num);

    fact = 1;

    while(num > 0) {
        fact *= num;
        num--;
    }

    printf("Factorial is: %d\n", fact);

    return 0;
}
