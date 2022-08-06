#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    int i =2;
    while(i<=n-1){
        if(n%i==0)
        {
            printf("It is a not prime number");
            break;
        }
        i++;
    }
    if(i==n)
    {
        printf("It is a prime number");
    }

    getch();
}
