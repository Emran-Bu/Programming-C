#include<stdio.h>
#include<conio.h>

void main()
{
    int x, j;

    for(x=1; x<=3; x++)
    {
        printf("%d. outer loop\n", x);

        for(j=1; j<=2; j++)
        {
            printf("%d. inner loop\n", j);
        }
        printf("\n");
    }

    getch();
}
