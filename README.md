# REPO_Tharun

A collection of small, self-contained C++ teaching programs that demonstrate basic-to-intermediate language concepts (classes, formatted I/O, manipulators, and containers). These console examples are intended for learners practicing C++ fundamentals.

## Stack

- **Language:** C++
- **Runtime / Standard library:** Standard C++ (iostream, string, iomanip, unordered_map)

## Repository layout

```
REPO_Tharun/
  .vscode/                          (editor settings)
  1'sComplementClass.cpp            (One's-complement using a class)
  GradeCalculator.cpp               (CGPA/grade calculator)
  GradeCalculator.exe               (Windows binary)
  MobileContactsHashMap.cpp         (contacts demo using unordered_map)
  MobileContactsHashMap.exe         (Windows binary)
  NoOfDaysInMonth.cpp               (small utility/example)
  OnesComplement_Class.exe          (Windows binary of complement program)
  PROGRAMS_DOCUMENTATION.md        (detailed documentation for each program)
  README.md                         (this file)
  FormattedIO_Programs/             (formatted I/O examples)
    BookShelf.cpp                   (formatted table output example)
    BookShelf.exe                   (Windows binary)
    UserDefmanipulator.cpp          (custom stream manipulator example)
    UserDefmanipulator.exe          (Windows binary)
    DeletionOfRepeats.cpp           (in-progress deduplication example)
```

## What this is

A set of concise example programs that each demonstrate a specific C++ concept (e.g., classes and member functions, formatted input/output, stream manipulators, and use of unordered_map). Each .cpp is a standalone console program; many have matching Windows .exe binaries included.

## How to build and run

Prerequisite: a C++ compiler (g++, clang, or MSVC).

Build individual programs (examples):

```bash
# One's Complement (source file name includes an apostrophe)
g++ "1'sComplementClass.cpp" -o OnesComplement

# Grade Calculator
g++ GradeCalculator.cpp -o GradeCalculator

# Book Shelf (formatted I/O)
g++ FormattedIO_Programs/BookShelf.cpp -o BookShelf

# User Defined Manipulator
g++ FormattedIO_Programs/UserDefmanipulator.cpp -o UserDefmanipulator

# Mobile Contacts
g++ MobileContactsHashMap.cpp -o MobileContactsHashMap
```

Run (Linux/macOS):

```bash
./OnesComplement
./GradeCalculator
./BookShelf
./UserDefmanipulator
./MobileContactsHashMap
```

On Windows you can run the included .exe files directly (for example, `GradeCalculator.exe`).

## Notes and caveats

- Some source files currently use array declarations dependent on a runtime value (e.g., `std::string Bname[n];` where `n` is read at runtime). These are not standard C++ and will not compile with all compilers; consider converting such arrays to `std::vector` before compiling.
- `FormattedIO_Programs/DeletionOfRepeats.cpp` is noted in the documentation as under development and may be incomplete.
- The repository is intended as educational examples rather than production-ready applications.

## Quick examples

One's complement example (interactive):

```
Enter a binary number: 1010
The entered number is binary...
The one's complement of the entered binary number is 0101
```

Mobile contacts example (interactive menu):

```
Mobile Contacts using Hash Map
1. Add contact
2. Search contact by name
3. Remove contact
4. Display all contacts
5. Exit
```

## Suggested improvements (optional)

- Replace variable-length arrays with `std::vector` for safety and portability.
- Remove compiled .exe files from source control and add a simple Makefile or CMakeLists.txt to standardize builds.
- Complete `DeletionOfRepeats.cpp` and add small unit or manual tests for each program.

---

Author: TharunAnandan7
