#include<stdio.h>
#include<conio.h>

void main()
{
    int x;
    int sum = 0;

    for(x=1; x<=100; x++)
    {
        printf("%d\n", x);
        sum = sum + x;
    }

    printf("Total sum = %d\n", sum);

    getch();
}
