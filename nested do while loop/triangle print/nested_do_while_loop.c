#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 1;

    do{ //loop one
        printf("%d.outer loop one\n", x);
        x++;


        int y = 1;

        do{ //loop two
            printf("     %d.outer loop two\n", y);
            y++;

            int z = 1;

            do{ //loop three
                printf("        %d.inner loop\n", z);
                z++;
            }
            while(z<=3);
        }
        while(y<=5);
    }
    while(x<=6);

    getch();
}
