#include<stdio.h>
#include<conio.h>

void main()
{

    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    //int x = 11;

    if(x%2==0)
    {
        printf("It is the even number: %d\n", x);
    } else if(x%2==1)
    {
        printf("It is the odd number: %d\n", x);
    } else
    {
        printf("This number is invalid: %d\n", x);
    }
    getch();
}

