#include<stdio.h>
#include<conio.h>

void main() {
    // Create variables with data type
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    double myDoubleNum = 19.99;  // Double (floating point number)
    char myLetter = 'D';       // Character
    char greetings[] = "Hello World!";  //Used for strings

    // Print variables
    printf("Integer data type = %d\n", myNum);  // Format Specifier %d or %i
    printf("float data type = %f\n", myFloatNum);   // Format Specifier %f
    printf("double data type = %lf\n", myDoubleNum); // Format Specifier %f or %lf
    printf("%character data type = c\n", myLetter); // Format Specifier %c
    printf("string = %s", greetings); // Format Specifier %s

    getch();
}

// Variables are containers for storing data values. (myNum, myFloatNum.....) is the name of the variable

//int	    2 or 4 bytes	Stores whole numbers, without decimals
//float	    4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
//double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
//char	    1 byte	Stores a single character/letter/number, or ASCII values
