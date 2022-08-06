#include<stdio.h>
#include<conio.h>
int rec(int);
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = rec(n);
    printf("%d", result);
    getch();
}

int rec(int n) //recursive function
{
    int fact;
    if(n<=1) //or (a==0)
        return 1;
    else
        fact = n*rec(n-1);  //again call to recursive function
    return fact;
}
