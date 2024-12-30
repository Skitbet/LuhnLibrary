#include <luhn.h>
#include <stdio.h>

int main()
{
    char number[256];
    printf("Enter a number to validate: ");
    scanf("%255s", number);

    if (luhn(number))
    {
        printf("The number is a valid Luhn number\n");
    }
    else
    {
        printf("The number is not a valid Luhn number\n");
    }

    printf("\n\nEnter a number to calculate the Luhn checksum: ");
    scanf("%255s", number);
    int checksum = calculate_luhn_checksum(number);
    printf("The Luhn checksum for the number is: %d\n", checksum);

    char prefix[256];
    int length;
    printf("\nEnter a prefix for the Luhn number: ");
    scanf("%255s", prefix);
    printf("Enter the length of the Luhn number to generate: ");
    scanf("%d", &length);

    char *luhn_number = generate_luhn_number(prefix, length);
    if (luhn_number)
    {
        printf("Generated Luhn number: %s\n", luhn_number);
        free(luhn_number);
    }
    else
    {
        printf("Failed to generate Luhn number\n");
    }

    return 0;
}