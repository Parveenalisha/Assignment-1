#include <stdio.h>

#include <math.h>

int main()

{

    float principle, rate, time, si, ci;

    printf("Enter Principle (Amount) : ");

    scanf("%f", &principle);

  printf("Enter Rate : ");

    scanf("%f", &rate);

    printf("Enter Time : ");

    scanf("%f", &time);

    si = (principle * rate * time) / 100;

  ci = principle * pow((1 + rate / 100), time) - principle;

    printf("\n");

    printf("Simple Interest : %.2f\n", si);

    printf("Compound Interest : %.2f\n", ci);

    return 0;

}
