// A simple C file that impls a luhns algorithm and returns a boolean value

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "luhn.h"

/**
 * Function to check if a number is valid according to the Luhn algorithm
 * @param number the number to check luhn validity
 */
int luhn(const char *number)
{
    int sum = 0;
    int len = strlen(number);
    int parity = len % 2;

    for (int i = 0; i < len; i++)
    {
        int digit = number[i] - '0';
        if (i % 2 == parity)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        sum += digit;
    }
    return sum % 10 == 0;
}

/**
 * Function to calculate the Luhn checksum for a number
 * @param number the number to calcualte the checksum of
 */
int calculate_luhn_checksum(const char *number)
{
    int sum = 0;
    int len = strlen(number);
    int parity = (len + 1) % 2;

    for (int i = 0; i < len; i++)
    {
        int digit = number[i] - '0';
        if (i % 2 == parity)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        sum += digit;
    }
    return (10 - (sum % 10)) % 10;
}

/**
 * Function to generate a Luhn number with a given prefix and length
 * 
 * @param prefix The prefix to use for the Luhn number
 * @param length The length of the Luhn number to generate
 */
char *generate_luhn_number(const char *prefix, int length)
{
    int prefix_len = strlen(prefix);
    if (prefix_len >= length)
    {
        return NULL;
    }

    char *number = malloc(length + 1);
    if (number == NULL)
    {
        return NULL;
    }

    strcpy(number, prefix);
    for (int i = prefix_len; i < length - 1; i++)
    {
        number[i] = '0' + (rand() % 10);
    }
    number[length - 1] = '0' + calculate_luhn_checksum(number);
    number[length] = '\0';

    return number;
}