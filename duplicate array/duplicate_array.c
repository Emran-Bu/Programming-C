#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[] = {2,62,6,8,63,21,8,10,6,20};

    int i, j, count=0;
    for(i=0; i<=9; i++)
    {
        for(j=i+1; j<=9; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                printf("duplicate number is = %d\n", arr[j]);
            }
        }
    }
    printf("total duplicate number is = %d ", count);

    getch();
}
