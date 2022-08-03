#include<stdio.h>
#include<conio.h>

void main()
{
    int x, j;

    for(x=1; x<=5; x++) // loop for row
    {
        for(j=1; j<=x; j++) // loop for col
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    char a = '*';
    for(x=1; x<=5; x++) // loop for row
    {
        for(j=1; j<=x; j++) // loop for col
        {
            printf("%c", a);
        }
        printf("\n");
    }

    getch();
}
