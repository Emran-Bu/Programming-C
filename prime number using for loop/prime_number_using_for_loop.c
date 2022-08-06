#include<stdio.h>
#include<conio.h>

void main()
{
    int i, n, count=0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    for(i=2;i<n;i++)
    {
        //printf("%d ", i);
        if(n%i==0)
        {
            count++;
            break;
        }
    }

    if(count == 0)
    {
        printf("It is a prime number");
    } else {
        printf("It is a not prime number");
    }

    getch();
}
