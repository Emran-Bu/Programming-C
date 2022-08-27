#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 10;

    int y = 15;

    //int *s = &y;

    int *s;
    s = &y;
    printf("%d\n", *s);
    printf("%d\n", &s);
    printf("%d\n", &y);
    printf("%d\n", s);

    printf("\n\n");

    //int *p = &x;
    //x++;
    int *p;
    p = &x;

    printf("%d\n", *p);
    printf("%d\n", p);
    printf("%d\n", &x);
    printf("%d\n", &p);

    printf("\n\n");

    int sum = *p + *s;
    printf("%d", sum);

    getch();
}
