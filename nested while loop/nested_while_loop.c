#include<stdio.h>
#include<conio.h>

void main()
{
    int x=1;

    while(x<=10)    //outer loop one
    {
        printf("%d. outer loop one\n", x);

        int y = 1;

        while(y<=5) //outer loop two
        {
            printf("    %d. outer loop two\n", y);

            int z = 1;

            while(z<=3) //inner loop one
            {
                printf("        %d. inner loop one\n", z);
                z++;
            }
            y++;
        }
        x++;
    }

    getch();
}
