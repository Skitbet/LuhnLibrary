#ifndef LUHN_H
#define LUHN_H

/**
 * Function to check if a number is valid according to the Luhn algorithm
 * @param n the number to check luhn validity
 */
int luhn(const char *number);

/**
 * Function to calculate the Luhn checksum for a number
 * @param n the number to calcualte the checksum of
 */
int calculate_luhn_checksum(const char *number);

/**
 * Function to generate a Luhn number with a given prefix and length
 * 
 * @param prefix The prefix to use for the Luhn number
 * @param length The length of the Luhn number to generate
 */
char *generate_luhn_number(const char *prefix, int length);

#endif