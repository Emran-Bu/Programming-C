#include<stdio.h>
#include<conio.h>

void main()
{
     int arr[] = {5, 7, 2, 6, 4, 8};
     arr[2] = 25;
     int i;
     for(i=0; i<=5; i++)
     {
         printf("%d ", arr[i]);
     }
    getch();
}
