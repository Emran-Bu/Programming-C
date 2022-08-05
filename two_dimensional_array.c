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
    //In the case of the first row
    printf("In the case of the first row\n");
    printf("%d ", arr[0][0]);
    printf("%d\n", arr[0][1]);

    //In the case of the second row
    printf("In the case of the second row\n");
    printf("%d ", arr[1][0]);
    printf("%d\n", arr[1][1]);

    //In the case of the third row
    printf("In the case of the third row\n");
    printf("%d ", arr[2][0]);
    printf("%d\n", arr[2][1]);

    //In the case of the fourth row
    printf("In the case of the fourth row\n");
    printf("%d ", arr[3][0]);
    printf("%d\n", arr[3][1]);

    //Three-dimensional array
    int three[2][3][6]={
                            {
                                {3,2,4,1,6,5},
                                {2,4,1,3,5,6},
                                {4,5,3,2,6,1},
                            },

                            {
                                {1,5,3,2,4,6},
                                {2,6,1,5,4,6},
                                {4,3,5,6,4,2}
                            }
                        };
    //In the case of the first array
    printf("In the case of the first array first row\n");
    printf("%d ", three[0][0][0]);
    printf("%d\n", three[0][0][1]);
    printf("In the case of the first array second row\n");
    printf("%d ", three[0][1][0]);
    printf("%d\n", three[0][1][1]);
    printf("In the case of the first array third row\n");
    printf("%d ", three[0][2][0]);
    printf("%d\n", three[0][2][1]);

    //In the case of the second array
    printf("In the case of the second array first row\n");
    printf("%d ", three[1][0][0]);
    printf("%d\n", three[1][0][1]);
    printf("In the case of the second array second row\n");
    printf("%d ", three[1][1][0]);
    printf("%d\n", three[1][1][1]);
    printf("In the case of the second array third row\n");
    printf("%d ", three[1][2][0]);
    printf("%d\n", three[1][2][1]);

    getch();
}
