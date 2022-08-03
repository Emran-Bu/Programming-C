#include<stdio.h>
#include<conio.h>

void main()
{
    printf("continue statement\n");
    int x;

    for (x = 0; x < 10; x++) {
      if (x == 4) {
        continue;
      }
      printf("%d\n", x);
    }

    printf("\nbreak statement\n");
    int i;

    for (i = 0; i < 10; i++) {
      if (i == 4) {
        break;
      }
      printf("%d\n", i);
    }

    getch();
}

