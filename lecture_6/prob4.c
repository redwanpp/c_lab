//Finding minimum from an array
//Written by S. M. Redwan
//ID: 221-35-828

#include <stdio.h>

int main() {
    int n, i, min;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements below: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for(i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The minimum value of the array is: %d\n", min);

    return 0;
}