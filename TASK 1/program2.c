/*Write a C program to calculate the discount on a grocery bill based on the amount spent, using the following rules:

If the amount is less than $100, no discount.
If the amount is between $100 and $200 (inclusive), apply a 5% discount.
If the amount is between $201 and $500 (inclusive), apply a 10% discount.
If the amount is more than $500, apply a 15% discount.
*/

#include <stdio.h>
int main()
{
    int a;
    float dis;
    printf("Enter the amount spent(in $): ");
    scanf("%d", &a);
    if (a < 100)
        dis = 0.0;
    else if (a >= 100 && a <= 200)
        dis = a * 0.05;
    else if (a >= 201 && a <= 500)
        dis = a * 0.1;
    else
        dis = a * 0.15;
    printf("The discount on the grocery bill is: $%f", dis);
    return 0;
}