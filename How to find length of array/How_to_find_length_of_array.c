#include<stdio.h>
#include<conio.h>

void main()
{
     int arr[] = {5, 7, 2, 6, 4, 8};
     //arr[2] = 25;
     int length = sizeof(arr)/sizeof(arr[0]);
     printf("%d\n", length);
     int i;

     int maxn = arr[0], minm = arr[0];
     for(i=0; i<=length-1; i++)
     {
         printf("%d ", arr[i]);
         if(arr[i]>maxn)
         {
             maxn = arr[i];
         }

         if(arr[i]<minm)
         {
             minm = arr[i];
         }

     }

     printf("\nmax number = %d\n", maxn);
     printf("\nmin number = %d", minm);


    getch();
}
