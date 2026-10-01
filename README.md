# Base Converter

A professional terminal application written in **C** (a single source file) for converting integers between number bases 2 to 36. It has a clean menu-driven interface, input validation, and a persistent file-based conversion history.

```
  +----------------------------------------------------------------+
  |                     BASE CONVERTER  v1.0.0                     |
  +----------------------------------------------------------------+
  |                           MAIN MENU                            |
  +----------------------------------------------------------------+
  | [1]  Quick Conversion   (Binary / Octal / Decimal / Hex)       |
  | [2]  Custom Conversion  (any base from 2 to 36)                |
  | [3]  View History                                              |
  | [4]  Clear History                                             |
  | [5]  About                                                     |
  | [0]  Exit                                                      |
  +----------------------------------------------------------------+
  | Conversions saved: 3                                           |
  +----------------------------------------------------------------+
```

## Features

- **Quick conversion** between Binary, Octal, Decimal and Hexadecimal
- **Custom conversion** between any two bases from 2 to 36 (digits `0-9`, `A-Z`)
- **Quick reference table** with every result (bin / oct / dec / hex)
- **Persistent history** in `data/history.log`, viewable and clearable from the menu
- **Robust validation**: invalid digits, empty input and signed 64-bit overflow are caught with clear messages
- Supports **negative numbers** and the `0b`, `0o`, `0x` prefixes
- Built-in **self tests** (`--test`)
- Cross-platform: Linux, macOS, Windows (MinGW / MSYS2)

## Project structure

```
base-converter/
├── base_converter.c   # the entire program
├── data/              # history.log is created here at runtime
├── README.md
├── LICENSE
└── .gitignore
```

Inside `base_converter.c` the code is organised in clearly marked sections: configuration, conversion engine, history module, terminal UI helpers, screens, self tests, and `main()`.

## Build and run

Requirements: a C99 compiler (`gcc` or `clang`).

```bash
gcc -std=c99 -Wall -Wextra -O2 base_converter.c -o base_converter
./base_converter           # interactive mode
./base_converter --test    # run the built-in self tests
```

Run it from the project folder so the history file is created in `data/`.

On Windows, use MinGW / MSYS2 and a terminal that supports ANSI colours (Windows Terminal or the Windows 10+ console).

## Example

```
  +----------------------------------------------------------------+
  |                       CONVERSION RESULT                        |
  +----------------------------------------------------------------+
  | Input            : 255                                         |
  | Input base       : Decimal (10)                                |
  | Output base      : Hexadecimal (16)                            |
  | RESULT           : FF                                          |
  +----------------------------------------------------------------+
  |                        Quick reference                         |
  +----------------------------------------------------------------+
  | Binary           : 11111111                                    |
  | Octal            : 377                                         |
  | Decimal          : 255                                         |
  | Hexadecimal      : FF                                          |
  +----------------------------------------------------------------+
```

## History file format

One record per line, pipe-separated:

```
timestamp|from_base|input|to_base|output
2026-10-01 10:13:31|10|255|16|FF
```

## Limitations and ideas

- Integers only (signed 64-bit range)
- Possible extensions: fractional numbers, two's-complement view, batch conversion from a file, CSV export of history

## License

MIT, see [LICENSE](LICENSE).
