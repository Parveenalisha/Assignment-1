#include <stdio.h>

#include <math.h>

int main() {

    int number, originalNumber, remainder, result;

    printf("Armstrong numbers from 1 to 100:\n");

    for (number = 1; number <= 100; number++) {

        originalNumber = number;

        result = 0;

        while (originalNumber != 0) {

            remainder = originalNumber % 10;

            result += pow(remainder, 3);

            originalNumber /= 10;

        }

        if (result == number) {

            printf("%d\n", number);

        }

    }

    return 0;

}
