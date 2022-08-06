#include<stdio.h>
#include<conio.h>

void main()
{
    int count, n, first, second, fibo;
    printf("Enter a Number: ");
    scanf("%d", &n);
    first=0;
    second=1;
    for(count=0; count<=n; count++)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d+", fibo);
    }
    getch();
}
