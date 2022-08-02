#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 155;
    int y = 88;
    int z = 10;

    if(x>y & x>z)
    {
        printf("The greatest number is x : %d\n", x);
    }
    else if(y>x & y>z)
    {
        printf("The greatest number is y: %d\n", y);
    }
    else
    {
        printf("The greatest number is y: %d\n", z);
    }
    getch();

    //similarly determine for small letter (x<y & x<z) (y<x & y<z)
}

