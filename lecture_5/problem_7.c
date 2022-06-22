//cheaking is this prime or not
//Written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i, flag;

    flag = true;

    printf("Please enter a number to cheak: ");
    scanf("%d", &num);

    for(i = 3; i < num; i++) {
        if(num % i == 0) {
            flag = false;
        }
    }

    if (flag == true) {
        printf("%d is prime\n", num);
    }
    else {
        printf("%d is not prime\n", num);
    }

    return 0;
}
