#include<stdio.h>
#include<conio.h>

void main()
{
    int day;
    printf("Enter the day: ");
    scanf("%d", &day);
    switch(day)
    {
        case 0:
            printf("sunday");
            break;
        case 1:
            printf("monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
    }

    getch();
}
