#include <stdio.h>

int main()
{
    int first, second;
    int quotient, remainder;

    printf("Enter first integer: ");
    scanf("%d", &first);

    printf("Enter second integer: ");
    scanf("%d", &second);

    quotient = first / second;
    remainder = first % second;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}