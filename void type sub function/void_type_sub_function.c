#include<stdio.h>
#include<conio.h>

void subFunForSum(int, int); //parameterized sub function prototype
void subFunForSub(); //non parameterized sub function prototype
void subFunForArr();
void main()
{
    //printf("%d", subFun(10));
    subFunForSum(10, 10);
    subFunForSub();
    subFunForArr();
    getch();
}

void subFunForSum(int a, int b) //parameterized sub function
{
    int c = a + b;
    printf("subFunForSum = %d\n", c);
}

void subFunForSub() //non parameterized sub function
{
    int a = 20;
    int b = 10;
    int c = b-c;
    printf("subFunForSub = %d\n", c);
}

void subFunForArr()
{
    int arr[] = {3,1,5,7};
    int i;
    for(i=0;i<=3;i++)
    {
        printf("array[%d] = %d\n", i, arr[i]);
    }

}
