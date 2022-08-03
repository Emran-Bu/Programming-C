#include<stdio.h>
#include<conio.h>

void main()
{
    int x, j, i;

    for(x=1; x<=4; x++)
    {
        printf("%d. outer loop one\n", x);

        for(j=1; j<=3; j++)
        {
            printf("%d. outer loop two\n", j);

            for(i=1; i<=2; i++)
            {
                printf("%d. inner loop\n", i);
            }
            printf("\n");
        }
        printf("\n");
    }

    getch();
}
