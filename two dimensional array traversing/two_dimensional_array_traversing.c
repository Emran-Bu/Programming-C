#include<stdio.h>
#include<conio.h>

void main()
{
    //Two-dimensional array
    int arr[4][6]={
                    {3,2,4,1,6,5},
                    {2,4,1,3,5,6},
                    {4,5,3,2,6,1},
                    {1,5,3,2,4,6}
                };
    int i, j, sum, allSum=0;

    // all array element print by index
    printf("\nall array element print by index\n");
    for(i=0;i<=5; i++)
    {
        //printf("%d ", arr[0][i]);
        //printf("%d ", arr[1][i]);
        printf("%d ", arr[2][i]);
        sum += arr[2][i];
        //printf("%d ", arr[3][i]);
    }
    printf("\n");
    printf("Total sum of array element by index= %d\n", sum);

    // all array element print
    printf("\nall array element print\n");
    for(i=0;i<=3; i++)
    {
        for(j=0;j<=5; j++)
        {
            printf("arr [%d][%d] = %d \n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    //Total sum of all array element
    for(i=0;i<=3; i++)
    {
        for(j=0;j<=5; j++)
        {
            allSum = allSum + arr[i][j];
        }
        printf("\n");
    }
    printf("Total sum of all array element = %d ", allSum);

    //In the case of the first row
    //printf("In the case of the first row\n");
    //printf("%d ", arr[0][0]);
    //printf("%d\n", arr[0][1]);




    getch();
}
