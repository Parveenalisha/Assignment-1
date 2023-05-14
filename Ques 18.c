#include <stdio.h>

int main() {

    int number, reversedNumber = 0;

    printf("Enter a number: ");

    scanf("%d", &number);

    

    int temp = number;

    while (temp != 0) {

        int digit = temp % 10;

        reversedNumber = reversedNumber * 10 + digit;

        temp /= 10;

    }

    printf("Reverse of %d is: %d\n", number, reversedNumber);

    return 0;

}
