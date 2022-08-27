#include<conio.h>
#include<stdio.h>

int ar(int arr[3][4]);
int ma(int a[]);
int check();
void main()
{
    int arr[3][4] = { {2, 1, 5, 6}, {4, 2, 5, 6}, {1, 4, 3, 2} };

    ar(arr);

    int a[] = {2, 1, 5, 6};
    ma(a);

    check();
    getch();
}

int ar(int arr[3][4])
{
    for(int i = 0; i<=2; i++)
    {
        for(int j = 0; j<=3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
}

int ma(int a[])
{
    for(int j = 0; j<=3; j++)
    {
        printf("%d ", a[j]);
    }
    printf("\n");
}

int check()
{
    int arr[3][4] = { {2, 1, 5, 6}, {4, 2, 5, 6}, {1, 4, 3, 2} };

    for(int i = 0; i<=2; i++)
    {
        for(int j = 0; j<=3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
}
