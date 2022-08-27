#include<stdio.h>
#include<conio.h>

void main()

{
    int arr[] = {3, 1, 4, 5, 6, 2};

    int i, maxp = 0, minp = 0;

    // Maximum position of the array
    for(i = 0; i<=5; i++)
    {
        if(arr[i]>arr[maxp])
        {
            maxp = i;
        }
    }
    printf("Maximum position of the array = %d\n", maxp);

    // Minimum position of the array
    for(i = 0; i<=5; i++)
    {
        if(arr[i]<arr[minp])
        {
            minp = i;
        }
    }

    printf("Minimum position of the array = %d", minp);
}
