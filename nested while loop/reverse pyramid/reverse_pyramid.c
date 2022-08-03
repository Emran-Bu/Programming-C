#include<stdio.h>
#include<conio.h>

void main()
{
    int x=6;

    while(x>=1)    //outer loop one
    {

        int y = 1;

        while(y<=5-x) //inner loop two
        {
            printf(" ");
            y++;
        }

        int z = 1;

        while(z<=2*x-1) //inner loop two
        {
            printf("#");
            z++;
        }


        printf("\n");
        x--;
    }

    getch();
}
