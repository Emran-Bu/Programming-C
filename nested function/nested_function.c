#include<stdio.h>
#include<conio.h>

void add();
void sub();
void mul();
void div();

void main()
{
    add();

    getch();
}

void add()
{
    int a = 10;
    int b = 20;

    int c = a + b;

    printf("add = %d\n", c);
    sub();
    mul();
    div();

}

void sub()
{
    int x = 30;
    int y = 20;

    int z = x - y;

    printf("sub = %d\n", z);
}

void mul()
{
    int x = 30;
    int y = 20;

    int z = x * y;

    printf("sub = %d\n", z);
}

void div()
{
    int x = 30;
    int y = 20;

    int z = x / y;

    printf("sub = %d", z);
}

