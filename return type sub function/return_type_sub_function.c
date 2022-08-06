#include<stdio.h>
#include<conio.h>

int subFunForSum(int, int); //parameterized sub function prototype
float subFunForSub(); //non parameterized sub function prototype
char subFunForArr();
void main()
{
    subFunForSum(30, 10);
    printf("subFunForSub = %f", subFunForSub());
    printf("\n");
    subFunForArr();
    getch();
}

int subFunForSum(int a, int b) //parameterized sub non return function
{
    int c = a + b;
    printf("subFunForSum = %d\n", c);
}

float subFunForSub() //non parameterized sub return type function
{
    float a = 20;
    float b = 10;
    float c = b-c;
    return c;
}

char subFunForArr()
{
    char arr[] = {'E','m','r','a','n'};
    char c, sum;
    for(c=0;c<=4;c++)
    {
        printf("array[%d] = %c\n",c, arr[c]);
    }
}
