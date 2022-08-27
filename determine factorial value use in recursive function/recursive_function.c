#include<stdio.h>
#include<conio.h>

int rec(int);

void main()
{
    int result = rec(5);

    printf("%d", result);

    getch();
}

int rec(int n)
{
    int fact, s;

    if(n<=1)
        return 1;
    else
        fact = n * rec(n - 1);

    return fact;
}
