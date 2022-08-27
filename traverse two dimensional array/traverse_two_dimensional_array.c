#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[4][6]={
                    {3,2,4,1,6,5},
                    {2,4,1,3,5,6},
                    {4,5,3,2,6,1},
                    {1,5,3,2,4,6}
                };

    int row, col, sum=0;

    for(row = 0; row<=3; row++)
    {
        for(col = 0; col<=5; col++)
        {
            sum += arr[row][col];
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    printf("%d ", sum);

    getch();
}
