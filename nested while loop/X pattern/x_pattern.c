#include<stdio.h>
#include<conio.h>

void main()
{
    int n = 5;
    int x=1;

    while(x<=n)    //outer loop
    {

        int y = 1;

        while(y<=n) //inner loop
        {
            if(x==y || x+y==n+1)
                printf("*");
            else
               printf("  ");

            y++;
        }

        printf("\n");
        x++;
    }

    getch();
}
