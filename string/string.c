#include<stdio.h>
#include<conio.h>

void main()
{
    char grettings[] = "Hello World"; //character print
    printf("character = %c\n", grettings[0]);

    char grettings1[] = "Hello World"; //string print
    printf("string = %s\n", grettings1);

    char greetings2[] = "Hello World!"; //change character
    greetings2[0] = 'J';
    printf("change character = %s\n", greetings2);

    char greetings3[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'}; // array string print
    printf("array string print = %s\n", greetings3);

    getch();
}
