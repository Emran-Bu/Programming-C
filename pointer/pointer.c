#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 50;
    int y = 40;

    int *p;
    p = &x;

    int *p1 = &y;

    int c = *p1 + *p;

    printf("sum = %d\n", c);


    printf("p1 = %d\n", p1);
    printf("*p1 = %d\n", *p1);
    printf("&p1 = %d\n", &p1);
    printf("y = %d\n\n", &y);


    printf("x = %d\n", x);
    printf("&x = %d\n", &x);
    printf("*p = %d\n", *p);
    printf("&p = %d\n", &p);
    printf("p = %d\n", p);

    getch();
}
