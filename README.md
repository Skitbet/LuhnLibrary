# Luhn Algorithm C Project

This is a personal test project implementing the Luhn algorithm in C. The project includes a header file, a source file, and a test file. This project was created after completing half of week 2 of the CS50 course. This was pretty advanced and I spent way to much time googling. There is probably things wrong with how I implemented this as a "library".

## Project Structure

```
/Project
├── include/
│   └── luhn.h
├── src/
│   └── luhn.c
└── tests/
    └── test.c
```

## Files

- **include/luhn.h**: Header file containing the function declarations.
- **src/luhn.c**: Source file containing the implementation of the Luhn algorithm.
- **tests/test.c**: Test file to verify the correctness of the Luhn algorithm implementation.

## Building the Project

To build the project, you can use the following commands:

```sh
# Windows
.\build.bat

# Linux (haven't tested)
make
```

## Luhn Algorithm

The Luhn algorithm is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers. The algorithm is designed to detect accidental errors in the identification numbers.

## Example Usage

Here is an example of how to use the Luhn algorithm in your code:

```c
#include "luhn.h"
#include <stdio.h>

int main() {
    const char *card_number = "1234567812345670";
    if (luhn(card_number)) {
        printf("The card number is valid.\n");
    } else {
        printf("The card number is invalid.\n");
    }
    return 0;
}
```
