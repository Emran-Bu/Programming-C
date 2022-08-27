#include<stdio.h>
#include<conio.h>

int sum(int, int);
void sub();
int mul(int, int);
void div();

void main()
{
    int result = sum(5, 5);
    printf("sum = %d", result);
    getch();
}

int sum(int a, int b)
{
    int c = a + b;
    sub(), div();
    int mresult = mul(10, 11);
    printf("mul = %d\n", mresult);

    return c;
}

void sub()
{
    int a = 30, b = 25;
    int c = a - b;
    printf("sub = %d\n", c);
}

int mul(int a, int b)
{
    int c = a * b;
    return c;
}

void div()
{
    int a = 20, b = 5;
    int c = a / b;
    printf("div = %d\n", c);
}

