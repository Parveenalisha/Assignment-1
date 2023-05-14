#include<stdio.h>

int main()

{

int m1, m2, m3, m4, m5, sum;

float percentage;

printf("Enter the marks of 5 subjects: ");

scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

sum = m1 + m2 + m3 + m4 + m5;

percentage = (float)sum/5.0;

printf("Total Marks: %d\n", sum);

printf("Percentage: %.2f\n", percentage);

if(percentage >= 90 && percentage <= 100)

    printf("Grade: A+\n");

else if(percentage >= 80 && percentage <= 89)

    printf("Grade: A\n");

else if(percentage >= 70 && percentage <= 79)

    printf("Grade: B+\n");

else if(percentage >= 60 && percentage <= 69)

    printf("Grade: B\n");

else if(percentage >= 50 && percentage <= 59)

    printf("Grade: C+\n");

else if(percentage >= 40 && percentage <= 49)

    printf("Grade: C\n");

else

    printf("Grade: Fail\n");

    

return 0;

}
