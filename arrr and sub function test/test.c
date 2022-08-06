#include<stdio.h>
#include<conio.h>

int even(int arr[], int length);
int odd(int arr[], int length);

void main()
{
    int arr[] = {1,10,5,2,3,7,4,6};
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Even Number: \n");
    even(arr, length);
    printf("\n");
    printf("Odd Number: \n");
    odd(arr, length);

    getch();

}

//for even number
int even(int arr[], int length)
{
    int i, sum=0;
    for(i=0; i<length; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d+", arr[i]);
            sum += arr[i];
        }
    }

    printf(".........= %d", sum);

}

//for odd number
int odd(int arr[], int length)
{
    int i, sum=0;
    for(i=0; i<length; i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d+", arr[i]);
            sum += arr[i];
        }
    }

    printf(".........= %d", sum);

}

