THE PRINTF FUNCTION PROJECT




*Project Title

This project involves creating a custom version of the printf function in the C language, named _printf. The _printf function allows formatted output to be displayed on the console (stdout). It analyzes the provided format string and displays corresponding values.

*Overview

The _printf() function is a powerhouse for generating formatted output. It writes to stdout, the standard output stream, based on a format string that guides the conversion of subsequent arguments.

*Compilation Command : 

To compile the project, your code will be compiled this way :

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c




*Requirements : 

*Code Foundations

Editors: Allowed vi, vim, or emacs for your coding journey.
Compilation: Ensure compatibility with Ubuntu 20.04 LTS using gcc and flags: -Wall -Werror -Wextra -pedantic -std=gnu89.
Style Guide: Adhere to the Betty style for clean and consistent code.
Global Variables: Omit global variables for a more robust foundation.

*Structure and Organization

Function Limit: Keep each file concise with no more than 5 functions.
Header Inclusion: Feature all function prototypes in main.h and include guards to avoid repetition.
Side Note: No _putchar function provided for this project.

*Documentation

Readability: Create a comprehensive README.md as the project's guide.
Main Files: Use provided main.c files for testing but avoid including them in your final submission.






Examples of Using the _printf Function :

#include "custom_print.h"

int main(void) {

    _printf("Welcome to %s!\n", "Holbertonschool");
    // Output: Welcome to Holbertonschool!

    _printf("Explore the magic of %c in Holbertonschool.\n", 'H');
    // Output: Explore the magic of H in Holbertonschool.

    _printf("Custom printing is easy at %s.\n", "Holbertonschool");
    // Output: Custom printing is easy at Holbertonschool.

    _printf("A special character: %%\n");
    // Output: A special character: %

    _printf("Enroll in %s with %d courses.\n", "Holbertonschool", 42);
    // Output: Enroll in Holbertonschool with 42 courses.

    _printf("The first letter of %s is %c.\n", "Holbertonschool", 'H');
    // Output: The first letter of Holbertonschool is H.

    return (0);
}


*Author : 
🌟 _printf() by Yassine and Benjamin.🌟

FlowChart 

Print char : 








Print String  : 


Print Percent : 















Print Putchar : 























Print Printf : 










Print Decimal : 








Print get_func : 


