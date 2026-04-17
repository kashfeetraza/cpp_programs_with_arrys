// -> (comments) you write this symbol for the any comments in front of code of after line exa. // this is the comment
// -> (preprocessor directive) #include is the preprocessor directive which is used to include the header files in the program example #include <stdio.h>

#include <stdio.h> // these are header files
#include <stdlib.h>

int main()
{    
    
    int num1, num2;
    int result;

    printf("Enter the first number: ");
    scanf("%d", &num1); // User enters the first number
    printf("Enter the second number: ");
    scanf("%d", &num2); // User enters the second number

    result = ((num1 + num2) * (num1 + num2)) + ((num1 - num2) * (num1 - num2)); 
    printf("Result: %d\n", result);

    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);

    if (num2 != 0) { // To avoid division by zero
        printf("Division: %d\n", num1 / num2);
    } else {
        printf("Division not possible (division by zero)\n");
    }                         
    // main is the name of the function
    //const int a = 3;               // const is the keyword which is used to define the constant variable
    //printf("Hello World %d\n", a); // printf is the function to print the output
    printf("type any key to exit\n");
    getchar();
    getchar();
    return 0;   // return is the function to return the value
    // -> (header files) header files are the files which are used to include the functions in the program
    // -> (stdio.h) stdio.h is the header file which is used to include the standard input output functions in the program
    // -> (stdlib.h) stdlib.h is the header file which is used to include the standard library functions in the program

    // -> (main function) main is the name of the function which is the entry point of the program exa. int main()
    // -> (int) int is the return type of the function which is used to return the value exa. int main() and return 0; is required in the int main() because int is the return type of the function
    // -> (void) void is the return type of the function which is used to return nothing exa. void main() and return 0; is not required in the void main()

    // -> (printf) printf is the function which is used to print the output on the screen
    // -> ("Hello World\n") "Hello World\n" is the string which is used to print on the screen "" is used to define the string and \n is the escape sequence which is used to print the new line

    // -> (return) return is the function which is used to return the value
    // -> (0) 0 is the value which is returned by the function

    // -> (semicolon) ; is the symbol which is used to terminate the statement if you don't write the semicolon at the end of the statement then it will give the error

    // -> (curly braces) {} are the symbols which are used to define the block of code
}

// variables
// -> (variables) variables are the name of the memory location which is used to store the data exa. int a = 3;
// -> (data types) data types are the type of the data which is stored in the variables exa. int, float, char, double
// -> (int) int is the data type which is used to store the integer data  exa. 3
// -> (float) float is the data type which is used to store the floating point data exa. 3.14
// -> (char) char is the data type which is used to store the character data exa. 'a'
// -> (double) double is the data type which is used to store the double floating point data exa. 3.14
// -> (variable declaration) variable declaration is the process of defining the variables exa. int a;

// difference btw float and double
// -> (float) float is the data type which is used to store the floating point data exa. 3.14
// -> (double) double is the data type which is used to store the double floating point data exa. 3.14 double is more precise than the float

// difference between declaration and definition
// -> (declaration) declaration is the process of defining the variables without assigning the value exa. int a;
// -> (definition) definition is the process of defining the variables with assigning the value exa. int a = 3;

// constants
// -> (constants) constants are the name of the memory location which is used to store the data but the value of the constant can't be changed exa. const int a = 3;
// -> (const) const is the keyword which is used to define the constant variable exa. const int a = 3;
// or
// -> #define is the preprocessor directive which is used to define the constant variable exa. #define a 3;

// operators
// -> (operators) operators are the symbols which are used to perform the operations exa. +, -, *, /, %, ++, --, =, ==, !=, >, <, >=, <=
// -> (+) + is the operator which is used to perform the addition operation exa. 3 + 4 = 7
// -> (-) - is the operator which is used to perform the subtraction operation exa. 3 - 4 = -1
// -> (*) * is the operator which is used to perform the multiplication operation exa. 3 * 4 = 12
// -> (/) / is the operator which is used to perform the division operation exa. 3 / 4 = 0
// -> (%) % is the operator which is used to perform the modulus operation exa. 3 % 4 = 3
// -> (++) ++ is the operator which is used to increment the value by 1 exa. a++ = a + 1
// -> (--) -- is the operator which is used to decrement the value by 1 exa. a-- = a - 1
// -> (=) = is the operator which is used to assign the value exa. a = 3
// -> (==) == is the operator which is used to compare the value exa. a == 3
// -> (!=) != is the operator which is used to compare the value exa. a != 3
// -> (>) > is the operator which is used to compare the value exa. a > 3
// -> (<) < is the operator which is used to compare the value exa. a < 3
// -> (>=) >= is the operator which is used to compare the value exa. a >= 3
// -> (<=) <= is the operator which is used to compare the value exa. a <= 3

// format specifiers
//  -> (format specifiers) format specifiers are the symbols which are used to print the data on the screen exa. %d, %f, %c, %lf, %s
//  -> (%d) %d is the format specifier which is used to print the integer data exa. printf("%d", 3);
//  -> (%f) %f is the format specifier which is used to print the floating point data exa. printf("%f", 3.14);
//  -> (%c) %c is the format specifier which is used to print the character data exa. printf("%c", 'a');
//  -> (%lf) %lf is the format specifier which is used to print the double floating point data exa. printf("%lf", 3.14);
//  -> (%s) %s is the format specifier which is used to print the string data exa. printf("%s", "Hello World");

// escape sequences (some of the escape sequences are below there are many!!)
// -> (escape sequences) escape sequences are the symbols which are used to print the special characters exa. \n, \t, \b, \a, \r, \v, \f, \0, \', \", \\, \?
// -> (\n) \n is the escape sequence which is used to print the new line exa. printf("Hello\nWorld");
// -> (\t) \t is the escape sequence which is used to print the tab exa. printf("Hello\tWorld");
// -> (\b) \b is the escape sequence which is used to print the backspace exa. printf("Hello\bWorld");
// -> (\a) \a is the escape sequence which is used to print the alert exa. printf("Hello\aWorld");

// printf and scanf
//  -> (printf) printf is the function which is used to print the output on the screen exa. printf("Hello World");
//  -> (scanf) scanf is the function which is used to take the input from the user exa. scanf("%d", &a);
//  -> (&) & is the symbol which is used to get the address of the variable exa. scanf("%d", &a);
