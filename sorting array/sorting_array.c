#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[7] = {02, 22, 03, 10, 5, 4, 34};
    int i, j, temp;
    for(i=0; i<=6; i++)
    {
        for(j=i; j<=6; j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0; i<=6; i++)
    {
        printf("\n%d \n", arr[i]);
    }

    getch();
}
