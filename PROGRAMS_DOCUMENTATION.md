# REPO_Tharun - Complete Program Documentation

This document provides comprehensive documentation for all programs saved in the REPO_Tharun repository. It serves as a reference guide for understanding the purpose, functionality, and implementation of each program.

---

## Table of Contents

1. [One's Complement Class](#ones-complement-class)
2. [Grade Calculator (CGPA Calculator)](#grade-calculator-cgpa-calculator)
3. [Book Shelf (Formatted I/O)](#book-shelf-formatted-io)
4. [User Defined Manipulator](#user-defined-manipulator)
5. [Deletion of Repeats](#deletion-of-repeats)

---

## One's Complement Class

### File: `1'sComplementClass.cpp`

**Purpose:**  
Demonstrates the concept of One's Complement using Object-Oriented Programming with C++ classes. The program takes a binary number as input, validates it, and outputs its one's complement.

**Key Features:**
- **Input Validation**: Ensures the entered data is a valid binary number (only contains '0' and '1')
- **Class-Based Design**: Uses a `binary` class with private string member and public member functions
- **Member Function Nesting**: Demonstrates nesting of member functions
- **Loop Control**: Allows users to repeatedly perform the operation or exit

**Class Structure:**
```
class binary
├── Private Members:
│   └── std::string s (stores binary number)
├── Public Methods:
│   ├── GetData() - Takes binary input from user
│   ├── CheckData() - Validates if input is binary
│   ├── ComplementData() - Computes one's complement
│   └── PutData() - Displays the result
```

**How It Works:**
1. User enters a binary number
2. Program validates if it's a valid binary number
3. Iterates through each bit and flips it (0→1, 1→0)
4. Displays the one's complement result
5. Allows user to continue or exit via "enter"/"exit" commands

**Example Usage:**
```
Enter a binary number: 1010
The entered number is binary...
The one's complement of the entered binary number is 0101
Enter 'exit' to terminate the program or 'enter' to continue: exit
Exiting the program...
```

---

## Grade Calculator (CGPA Calculator)

### File: `GradeCalculator.cpp`

**Purpose:**  
A console-based CGPA (Cumulative Grade Point Average) calculator that computes the overall GPA based on individual subject credits and grade points.

**Key Features:**
- **Multi-Subject Support**: Accepts input for multiple subjects
- **Formatted Output**: Uses `iomanip` library for professional formatting
- **Dynamic Input**: User specifies the number of subjects
- **Precision Control**: Sets decimal precision to 2 places for GPA display
- **Formula-Based Calculation**: CGPA = (Sum of (Credit × Grade Point)) / Total Credits

**Data Structure:**
```
Input Requirements:
├── Number of subjects (n)
└── For each subject (i = 1 to n):
    ├── Subject Name
    ├── Credit (weightage)
    └── Grade Point (0-10)

Output:
├── Total Credits (sum of all credits)
└── CGPA (calculated average)
```

**Algorithm:**
```
1. Read number of subjects
2. For each subject:
   - Store subject name
   - Get credit value
   - Get grade point (0-10)
   - Add to totalCredits
   - Add (credit × gradePoint) to totalGradePoints
3. Calculate CGPA = totalGradePoints / totalCredits
4. Display results with 2 decimal precision
```

**Example Usage:**
```
Enter the number of subjects: 3
Enter the name of the subject - 1: Mathematics
Subject 1
Enter Credit: 4
Enter Grade Point (0-10): 9.5

[... repeat for subjects 2 and 3 ...]

Total Credits      : 12.00
CGPA               : 8.75
```

---

## Book Shelf (Formatted I/O)

### File: `FormattedI/BookShelf.cpp`

**Purpose:**  
Demonstrates advanced formatted input/output operations in C++. The program manages a bookshelf inventory with formatted table display of book details including name, code, and price.

**Key Features:**
- **Field Width Control**: Uses `width()` to set column widths
- **Text Justification**: Implements left and right text alignment
- **Fill Characters**: Uses fill characters to create readable tables
- **Precision Handling**: Displays floating-point prices with proper formatting
- **Display Flags**: Uses `setf()` with `ios` flags for output control

**Data Structure:**
```
For each book:
├── Book Name (string)
├── Book Code (integer)
└── Book Price (float)

Output Table Format:
NAME                CODE                        COST
[Left Justified]    [Left Justified]            [Right Justified]
```

**Formatting Techniques Used:**
- `cout.precision()` - Sets decimal precision
- `cout.width()` - Sets field width
- `cout.setf(ios::showpoint)` - Displays trailing zeros
- `cout.fill('-')` - Fills empty spaces with '-'
- `cout.setf(ios::left/right)` - Text alignment
- `adjustfield` - Controls alignment direction

**Example Output:**
```
Enter the number of books: 2
Enter the Book number 1's name: ANSI_C
Enter the Book number 1's code: 101
Enter the Book number 1's price: 250.95

NAME                CODE                        COST
ANSI_C-----------101-----------250.95
ALGORITHMS------105-----------618.80

Total: 869.75
```

---

## User Defined Manipulator

### File: `FormattedI/UserDefmanipulator.cpp`

**Purpose:**  
Demonstrates the creation and use of custom output stream manipulators in C++. Shows how to define and apply user-defined manipulators to control output formatting.

**Key Features:**
- **Custom Manipulator**: Defines `indent()` function as a custom manipulator
- **Chainable Operations**: Allows multiple formatting operations to be chained
- **Output Stream Reference**: Returns `std::ostream&` for operator chaining
- **Multiple Formatting Flags**: Combines several formatting options in one manipulator

**Manipulator Definition:**
```cpp
std::ostream& indent(std::ostream& output) {
    // Set trailing zeros display
    // Set field width to 10
    // Set precision to 2 decimal places
    // Set right justification
    // Fill unused spaces with '*'
}
```

**Formatting Applied:**
- `showpoint` - Displays decimal point and trailing zeros
- `width(10)` - Sets field width to 10 characters
- `precision(2)` - Sets decimal precision to 2
- `right` - Right-justifies the output
- `fill('*')` - Fills unused space with '*' character

**Usage Example:**
```cpp
std::cout << indent << "Testing..." << UserName << indent;
```

**Output:**
```
***Testing...****Tharun Anandan***
```

---

## Deletion of Repeats

### File: `FormattedI/DeletionOfRepeats.cpp`

**Status:** ⚠️ **Under Development**

**Purpose:**  
Intended to remove duplicate elements from a character array. This program demonstrates array manipulation and duplicate removal logic.

**Planned Structure:**

```cpp
Function Declarations:
├── GetArray() - Input character array from user
├── PopDuplicate() - Remove duplicate characters
└── DisplayArray() - Display the resulting array

Data Structure:
├── Array size: 1024 characters
└── Support for dynamic sizing
```

**Note:** This file is currently a skeleton with function declarations but lacks implementation. The main() function is empty except for variable declarations.

**Intended Algorithm:**
```
1. Get character array from user
2. Iterate through array
3. For each character:
   - Check if it appears later in the array
   - If yes, mark or remove the duplicate
4. Display the cleaned array without duplicates
```

---

## Repository Structure

```
REPO_Tharun/
├── 1'sComplementClass.cpp          [One's Complement - Complete]
├── GradeCalculator.cpp             [CGPA Calculator - Complete]
├── GradeCalculator.exe             [Compiled Binary]
├── OnesComplement_Class.exe        [Compiled Binary]
├── README.md                        [Original README]
├── PROGRAMS_DOCUMENTATION.md       [This File]
└── FormattedI/
    ├── BookShelf.cpp               [Bookshelf I/O - Complete]
    ├── BookShelf.exe               [Compiled Binary]
    ├── UserDefmanipulator.cpp      [Custom Manipulator - Complete]
    ├── UserDefmanipulator.exe      [Compiled Binary]
    └── DeletionOfRepeats.cpp       [Array Deduplication - In Progress]
```

---

## Technology Stack

- **Language:** C++
- **Standard Library:** iostream, iomanip, string
- **Concepts Demonstrated:**
  - Object-Oriented Programming (Classes, Member Functions)
  - Input/Output Operations (Formatted and Unstructured)
  - Stream Manipulators and Formatting Flags
  - String Operations
  - Array Management
  - Control Structures (Loops, Conditionals)
  - Function Nesting and Chaining

---

## Compilation Instructions

### Prerequisites
- C++ compiler (g++, MSVC, Clang, etc.)
- Standard C++ library

### Compiling Individual Programs

```bash
# One's Complement Class
g++ 1'sComplementClass.cpp -o OnesComplement

# Grade Calculator
g++ GradeCalculator.cpp -o GradeCalculator

# Book Shelf
g++ FormattedI/BookShelf.cpp -o BookShelf

# User Defined Manipulator
g++ FormattedI/UserDefmanipulator.cpp -o UserDefmanipulator
```

### Running Programs
```bash
./OnesComplement
./GradeCalculator
./BookShelf
./UserDefmanipulator
```

---

## Learning Outcomes

These programs collectively demonstrate:

1. **Basic C++ Concepts**
   - Input/Output operations
   - Data types and variables
   - Control structures

2. **Object-Oriented Programming**
   - Class definition and encapsulation
   - Member variables and methods
   - Member function nesting

3. **Advanced I/O Operations**
   - Stream formatting
   - Precision control
   - Text alignment and justification
   - Custom manipulators

4. **Array and String Operations**
   - Character and string manipulation
   - Array traversal and modification
   - Data validation

5. **Real-World Applications**
   - Grade management systems
   - Inventory management
   - Binary number operations

---

## Future Enhancements

1. **Deletion of Repeats** - Complete the implementation
2. **Error Handling** - Add try-catch blocks for robustness
3. **File I/O** - Save and load data from files
4. **GUI Integration** - Create graphical user interfaces
5. **Data Validation** - Enhanced input validation and error messages
6. **Code Optimization** - Performance improvements and memory management

---

## Author Information

**Repository Owner:** TharunAnandan7  
**Repository Name:** REPO_Tharun  
**Language:** C++  
**Last Updated:** 2026-07-12

---

## Notes for Readers

- Each program is self-contained and can be compiled and executed independently
- The programs progress from basic to intermediate C++ concepts
- Comments in the code provide detailed explanations of functionality
- Executable files (.exe) are included for Windows systems
- For Linux/Mac systems, compile using g++ as shown above

---

**End of Documentation**
