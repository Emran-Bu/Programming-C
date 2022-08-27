#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[] = {3, 1, 4, 5, 6, 2};

    int i, max = arr[0], min = arr[0];
    // Maximum value of the array
    for(i=0; i<=5; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("Maximum value of the array = %d\n", max);

    // Minimum value of the array
    for(i=0; i<=5; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("Minimum value of the array = %d\n", min);

    int sum = 0;

    sum = max + min;
    printf("max + min = %d", sum);

    getch();
}
