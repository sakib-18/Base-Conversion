# Complete Number System Conversion

A menu-driven console program written in **C** that converts numbers between the four common number systems: **Binary, Decimal, Octal and Hexadecimal**. All 12 conversion directions are available from a single menu, and the program keeps running until you choose to stop.

```
                          COMPLETE NUMBER SYSTEM CONVERSION
                         ___________________________________

                         CHOOSE THE CONVERSION BETWEEN BASES

========
 BINARY
========

PRESS <1> Binary to Decimal.
PRESS <2> Binary to Octal.
PRESS <3> Binary to Hexa-Decimal.

*********
 DECIMAL
*********

PRESS <4> Decimal to Binary.
PRESS <5> Decimal to Octal.
PRESS <6> Decimal to Hexa-Decimal.

~~~~~~~
 OCTAL
~~~~~~~

PRESS <7> Octal to Binary.
PRESS <8> Octal to Decimal.
PRESS <9> Octal to Hexa-Decimal.

^^^^^^^^^^^^^
 HEXA-DECIMAL
^^^^^^^^^^^^^

PRESS <10> Hexa-Decimal to Binary.
PRESS <11> Hexa-Decimal to Decimal.
PRESS <12> Hexa-Decimal to Octal.

ENTER YOUR CHOICE:
```

## Features

- **12 conversions** covering every direction between Binary, Decimal, Octal and Hexadecimal
- **Input validation** for binary (only 0 and 1), octal (only 0 to 7) and hexadecimal (only 0-9 and A-F) numbers, with a "try again" prompt on invalid input
- Accepts **uppercase and lowercase** hexadecimal digits (`ff` and `FF` are both fine)
- **Continuous use**: after each result, enter `1` to convert another number or `0` to quit
- Coloured console theme and a clean sectioned menu
- Simple modular design: one function per conversion

## Supported conversions

| From \ To | Binary | Decimal | Octal | Hexadecimal |
|-----------|:------:|:-------:|:-----:|:-----------:|
| **Binary**      | -        | option 1 | option 2 | option 3  |
| **Decimal**     | option 4 | -        | option 5 | option 6  |
| **Octal**       | option 7 | option 8 | -        | option 9  |
| **Hexadecimal** | option 10| option 11| option 12| -         |

## How it works

Each conversion function follows the classic manual method:

- **To decimal:** multiply each digit by its place value (powers of 2, 8 or 16) and add them up
- **From decimal:** repeatedly divide by the target base and read the remainders in reverse order
- **Between two non-decimal bases:** convert to decimal first, then to the target base
- **Hexadecimal to binary:** each hex digit maps directly to its 4-bit group

| Function | Purpose |
|----------|---------|
| `Bin_to_Dec`, `Bin_to_Oct`, `Bin_to_Hex` | Binary conversions |
| `Dec_to_Bin`, `Dec_to_Oct`, `Dec_to_Hex` | Decimal conversions |
| `Oct_to_Bin`, `Oct_to_Dec`, `Oct_to_Hex` | Octal conversions |
| `Hex_to_Bin`, `Hex_to_Dec`, `Hex_to_Oct` | Hexadecimal conversions (take a string) |

## Build and run

Requirements: a C compiler such as `gcc` (MinGW on Windows, or Code::Blocks / Dev-C++).

```bash
gcc project.c -o project -lm
./project          # Linux / macOS
project.exe        # Windows
```

The program is designed for the **Windows console**: it uses `system("COLOR 7C")` to set the colour theme. On Linux or macOS that command is not available, so the colour is skipped and the program otherwise runs normally.

## Example

```
ENTER YOUR CHOICE: 1

***BINARY TO DECIMAL***

Enter the Number in Binary form (0s & 1s): 1010

Equivalent Decimal Number : 10

DO YOU WANT TO CONTINUE = (1/0) :
```

```
ENTER YOUR CHOICE: 6

***DECIMAL TO HEXA-DECIMAL***

Enter the Number in Decimal form (0 to 9): 255

Equivalent Hexa-Decimal Number : FF
```

## Limitations and ideas for future work

- Works with non-negative whole numbers only (no negative numbers or fractions)
- Uses `int` and `long int` internally, so very large values can overflow
- Entering `0` as the number to convert prints no digits
- Possible extensions: save a conversion history to a file, support arbitrary bases (2 to 36), add negative number and fraction support

## Author

Fatin Israk Sakib
