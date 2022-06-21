//print character's ASCII value
//Written by S. M. Redwan
//ID: 221-35-828


#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character to know its ASCII value: ");
    scanf("%c", &ch);

    printf("%d is the AsCII value of %c.\n", ch, ch);

    return 0;
}
