THE PRINTF FUNCTION PROJECT


* Project Title

This project involves creating a custom version of the printf function in the C language, named _printf. The _printf function allows formatted output to be displayed on the console (stdout). It analyzes the provided format string and displays corresponding values.

* Overview

The _printf() function is a powerhouse for generating formatted output. It writes to stdout, the standard output stream, based on a format string that guides the conversion of subsequent arguments.

* Compilation Command : 

->To compile the project, your code will be compiled this way :

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c




* REQUIREMENTS : 

-> Code Foundations

Editors: Allowed vi, vim, or emacs for your coding journey.
Compilation: Ensure compatibility with Ubuntu 20.04 LTS using gcc and flags: -Wall -Werror -Wextra -pedantic -std=gnu89.
Style Guide: Adhere to the Betty style for clean and consistent code.
Global Variables: Omit global variables for a more robust foundation.

* Structure and Organization

Function Limit: Keep each file concise with no more than 5 functions.
Header Inclusion: Feature all function prototypes in main.h and include guards to avoid repetition.
Side Note: No _putchar function provided for this project.

* Documentation

Readability: Create a comprehensive README.md as the project's guide.
Main Files: Use provided main.c files for testing but avoid including them in your final submission.






-> Examples of Using the _printf Function :

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


* AUTOR :
🌟 _printf() by Yassine and Benjamin.🌟

* FLOWCHART : 

Print char : 

//www.plantuml.com/plantuml/png/SoWkIImgAStDuG8pkAmyyp9BCXDpCgjI5PAjkQo2KXDJ51ABqajpK_DA5DAAydCLoXBZSpABIu2IpeavEGhnkPK5fIN96Ob52kMP9HbGNIMbHNaAXjP0K_CBk1nIyrA0LW00


Print String  : 

//www.plantuml.com/plantuml/png/PP0_Q_Cm48TtVOeVMU8CWRnhl0JoTYY430aTIbl2OPzjKUbaf5Df-kbh6KB_TDE37fwJRfUKecRlZ9bFPdilLYqv-y6mql8xI5eqVhnqMPhQR4zCBIZssRCekXWytkZYR59GGj8uEVk1crVOhY1iml7XSAZDnDKZfnLqO45rPiL_xYWxNHbWMxZu6h2e93ktMjI6fRNTp-3JvgKqby-RvP_cdH_rYhD6A_qSFR7cA5Z_goTA6aR3BZ6gOv0r_vOF8OpG8ORS3sW6YjGenmGhyx-AiYVdSF7NCMiHq8K8fkQRVdlpRVJNwkRnPZTTbtr_0W00


Print Percent : 

//www.plantuml.com/plantuml/png/7Sqz3i8m44JXVayn3GgKj74JYHjmWMY53OdadsWz2-Bso7IlUj_IgKOlMUHVCj-JHgYzlAHAFAqLl7NDUoVEjH7UKxm4cM-QCzRoFPoFJGsVdHkcqnJ6WcuLro2TxH1PKes3-040


Print Putchar : 

//www.plantuml.com/plantuml/png/SoWkIImgAStDuU82ixYiWb8JKnIICnAB4fDBKeiKr9FLhRcid1DpSXJAYp9BKZKCTHJKadKK33MjGMfBIelo50ojWPhp2xYu75BpKa1c0G00


Print Printf : 

//www.plantuml.com/plantuml/png/NP4nJyGm38Nt_8gteEiD3ApjSX8w91O6c112LPIwruZ4gH87E7uzIIeaxfR8zlDdwpc793fAzawf5gd-aQrOxUmFmV94tz0ymVXrk90-zUXi4kXuIaLvgIpc4E52MF5bPO49F9N-mBNkjRorSU_W8E3itA3iZEwLqXwo4ACx-bNEU6ZDUmNqpoGvCcxlXf8b2QiYbwWgzmkP3nJUv1Y91MRHKHkX29kmkzbLucfy3Kkrqjevd4Z6ERDf_YoRI9vODi-LhglGFON_pEZFQvQwwvAwlXH0nVkijhS_bdgO_yvJz3Qjth0qb6ppkQ7DfZeKeNxABm00


Print Decimal : 

//www.plantuml.com/plantuml/png/PP91Jm8n48Nl_HNlOe04ennbbN3mui74I3nuCiDsW4cwPTFEOl3NssuNiWctffttpRmtNKUbe5tZZEbFPldcHOMS_35E58IsZYCirzAGcwDksZbyryn1tiBANhGooqyc2mhxhc6ls8LZaxG_JgA2OYwlZEmmJGSyut46FR37z9lZp03BZo19DRcVzCokjQHSHEojx4RInLMx4RztZDSym0YIooY2K1yeKAqS4iH5nlIzSohjHL8QZwmE1hDuKUMt3MknTtK0_1x49LIvNk4fGrBfW3vV8TjpcdG8w2IM2wXSPqworQD6o46vUi6YK8kXOlpXGfxXBY5k7FRrNtrkenbAyvJJRUCIRDwRTi7dfLOcwh4rPfrUyc_u1m00


Print get_func : 

//www.plantuml.com/plantuml/png/TL8zJyCm4DtzAzw2cYw8ELagc1X02CI4gkf8Bes5OmT_j9HVZozMQJjqY-xUnxtdh48a7zDeb9g_LFreTTHaz2zZHrxJf-40RJl-0TaExJXj-cJRvW99tjC1haUOkDMzPXyAsddFONAsqtOBuKNjR40bk8_rCgkyYIq8-q4RXd5kmbx70N5Wj48K1cRyVCNwzip3kWYRZ6bKeLTNSFe4NIf0zwYozaxc_9t88Beh5aivnA9wejWEmWNg1p96nbVYeVTkl93hIoJospIoZQ4fEkzJHv5FbPRflMVwWajH-XGNwKHsd6rw1UJYMyyYLDwbKNapvrSIx2WduUwEvpyx_2UeNxpEtCNDehoH59629DYCXobb5Fb65RVwbMFozkp64Dsar2glvQ_v0m00

