#include<stdio.h>
#include<conio.h>

void main() {
    // Arithmetic operator
    //Arithmetic operators are used to perform common mathematical operations.

    printf("Arithmetic operator\n");
    int x = 100;
    int y = 250;
    int z = x + y;     // Total sum (100 + 250)= 350
    printf("X = %d\n", x);
    printf("y = %d\n", y);
    printf("Total = %d\n", z);

    // for subtraction (x-y), Multiplication(x*y), Division(x/y), modulas(x%y), average(x+y)/2

    //increment & decrement

    printf("increment & decrement value then result is\n");

    x++; //Increases the value of x variable by 1
    y--; //Increases the value of y variable by 1

    z = x + y;
    printf("Total = %d\n", z); // Total sum (101 + 249)= 350

    //Assignment Operators
    //Assignment operators are used to assign values to variables.

    printf("Assignment operator\n");
    int a = 10; // assign the value
    printf("%d\n", a);

    //Comparison Operators
    //Comparison operators are used to compare two values.

    printf("Comparison operator\n");
    int b = 5;
    int c = 3;
    printf("%d\n", b > c); // returns 1 (true) because 5 is greater than 3

    //Likewise Equal to	x == y, Not equal x != y, Greater than x > y, Less than	x < y, Greater than or equal to	x >= y, Less than or equal to x <= y

    //Logical Operators
    //Logical operators are used to determine the logic between variables or values
    printf("Logical operator\n");
    int d = 5;
    int f = 3;

    // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
    printf("%d", d > 3 && f < 10);
    //Likewise d > 3 || f < 10 Logical or d > 3 ! f < 10	Logical not

    getch();
}
