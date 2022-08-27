#include<stdio.h>
#include<conio.h>

int Bubble_sort(int[]);
void main()
{
    int arr[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    Bubble_sort(arr);
    getch();
}

int Bubble_sort(int arr[])

{
    int i, j, temp=0;
    for(i=0; i<=9; i++)
    {
        //printf("%d ", arr[i]);
        for(j=i;j<=9;j++)
        {
            //printf("%d ", arr[j]);
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                //printf("%d ", temp);
                arr[i] = arr[j];
                arr[j] = temp;
                //printf("%d ", arr[i]);
                //printf("%d ", temp);
            }
        }
    }

    for(i=0; i<=9; i++)
    {
        printf("%d ", arr[i]);
    }
}
