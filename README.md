# StringConversion
Certainly! Let's break down the functionality of the provided C++ code in paragraphs:


**Author: Angel Zaldivar**

**Goal: Conversion of Strings, etc.**

This C++ program, authored by Angel Zaldivar, focuses on the conversion and manipulation of strings. The goal is to demonstrate various string operations, including changing the case of characters, proper casing, case selection, and trimming leading and trailing whitespaces.

**Code Explanation:**

The program defines several user-defined string functions and a `main` function to showcase their usage.

1. **String Conversion Functions:**
    - `strLowerCase`: Converts all characters in the given string to lowercase and outputs the result.
    - `strUpperCase`: Converts all characters in the given string to uppercase and outputs the result.
    - `strPropperCase`: Converts the given string to proper case (capitalizing the first letter of each word) and outputs the result.

2. **Case Selection Function:**
    - `strCaseSelector`: Accepts a string and a character specifying the desired case ('U' for uppercase, 'L' for lowercase, 'P' for proper case). It then outputs the string in the specified case.

3. **Trimming Function:**
    - `strTrim`: Removes leading and trailing whitespaces from the given string and outputs the trimmed result. The implementation utilizes loops and conditions to achieve the trimming.

**Main Function:**

The `main` function serves as a demonstration platform for the user-defined functions. It calls each function with specific inputs to showcase their functionality.

The output of each function is displayed, demonstrating the conversion of strings to lowercase, uppercase, proper case, and the ability to select different cases. Additionally, the trimming function is tested with various input strings, including cases with leading and trailing spaces.

In summary, the program provides a set of string manipulation functions to convert strings to different cases and trim leading/trailing whitespaces. The `main` function showcases these functions with illustrative examples.
