//printing all prime number of a rang
//Written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j, a, prime, root;

    printf("Enter the last number of your rang: ");
    scanf("%d", &n);

    prime = 1;

    for(i = 2; i <= n; i++) {
        a = true;
        for(j = 2; j  < i ; j++) {
            if (i % j == 0) {
                 a = false;
            }
        }
        if(a != false) {
            printf("%d. prime number is %d\n", prime, i);
            prime++;
        }
    }

    return 0;
}
