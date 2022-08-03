#include<stdio.h>
#include<conio.h>

void main()
{
    int n = 7;
    int row = 1;

    do{

        int col = 1;
        do{
            if(row==1||row==n||col==1||col==n)
            {
                printf("*");
            } else{
                printf(" ");
            }
            col++;
        }
        while(col<=n);
        printf("\n");
        row++;
    }
    while(row<=n);

    getch();
}
