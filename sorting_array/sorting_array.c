#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[] = {3,1,4,2,5};
    int i, j, temp;

    for(i = 0; i<=4; i++)
    {
        for(j=i; j<=4; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0; i<=4; i++)
    {
        printf("%d", arr[i]);
    }
    getch();
}
