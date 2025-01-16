// Write a C program to check if a number is a perfect number. (A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding the number itself. For example, 6 is a perfect number because 1, 2, and 3 are its divisors, and 1 + 2 + 3 = 6.)

#include <stdio.h>
int main()
{
    int n, d, i, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        for (i = 1; i < n; i++)
        {
            d = n % i;
            if (d == 0)ko
            {
                sum = sum + i;
            }
        }
        if (n == sum)
            printf("The number is a perfect number");
        else
            printf("The number is not a perfect number");
    }
    else
        printf("The number is not a perfect number");
    return 0;
}
