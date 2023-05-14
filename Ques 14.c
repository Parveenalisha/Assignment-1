#include <stdio.h>

int main() {

    int number, sumEven = 0, sumOdd = 0;

    printf("Enter a number: ");

    scanf("%d", &number);

    r

    for (int i = 1; i <= number; i++) {

        if (i % 2 == 0) {

            sumEven += i;

        } else {

            sumOdd += i;

        }

    }

    printf("Sum of even numbers from 1 to %d is: %d\n", number, sumEven);

    printf("Sum of odd numbers from 1 to %d is: %d\n", number, sumOdd);

    return 0;

}
