#include<stdio.h>
#include<conio.h>

void main()
{
    int n, row, col;
    printf("Enter n : ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        //printf("%d\n", x);

        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
}
