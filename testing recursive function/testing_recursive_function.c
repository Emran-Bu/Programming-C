#include<stdio.h>
#include<conio.h>
int rec(int);
void main()
{
    rec(1);
    int o = oc(5);
    printf("\n%d", o);
}

int rec(int n)
{
    if(n<=20)
    {
        printf("%d ", n);
        rec(n+1);
    }
}

int oc(int a)
{
    int k=1;
    for(int i=1; i<=a; i++)
    {
        k = k * i;

    }
    return k;
}

