#include<stdio.h>
#include<conio.h>
int rec(int);
void main()
{
    int result = rec(3);
    printf("%d", result);
    getch();
}

int rec(int a) //recursive function
{
    int fact;
    if(a<=1) //or (a==0)
        return 1;
    else
        fact = a*rec(a-1);  //again call to recursive function
    return fact;
}
