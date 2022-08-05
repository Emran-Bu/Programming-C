#include<stdio.h>
#include<conio.h>

void main()
{

    //int arr[] = {2,20,62,8,63,10,21,63,10,6,2,8,20};
    int arr[] = {2,62,8,63,21,10,6,20};
    //int arr[] = {2,62,6,8,63,21,10,6,20};
    int m, j, count, length;
    length = sizeof(arr)/sizeof(arr[0]);
    printf("Array length = %d \n", length);

    printf("Repeated elements are = ");
    for(m=0; m<length; m++){
        for (j=m+1; j<length; j++){
            if(arr[m]==arr[j]){
                count++;
                printf("%d ", arr[j]);

            }
        }
    }

    if(!arr[j]){
        printf("\nTotal Repeated elements = %d ", count);
        printf("\narray element is duplicate please provide non duplicate number");
        return 0;
    }

    int sum = 0, i, max = arr[0], min = arr[0], maxp = 0, minp = 0;
    printf("\nOriginal array is = ");

    for(i=0; i<length; i++){
        printf("%d ", arr[i]);
        sum += arr[i];

        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>arr[maxp]){
            maxp = i;
        }
        if(arr[i]<arr[minp]){
            minp = i;
        }
    }
    printf("\nMaximum Number is: %d", max);
    printf("\nMinimum Number is: %d", min);
    printf("\nMaximum position is: %d", maxp);
    printf("\nMinimum position is: %d", minp);
    printf("\nThe total sum of the original array = %d \n", sum);

    int n, add = 0;

    printf("We find the array by extracting the maximum and minimum positions from the original array = ");

    if(maxp>minp){
        for(n=minp+1; n<=maxp-1; n++){
            printf("%d ", arr[n]);
            add += arr[n];
        }
    } else if(maxp<minp){
        for(n=maxp+1; n<=minp-1; n++){
            printf("%d ", arr[n]);
            add += arr[n];
        }
    }

    printf("\nThe sum between the maximum and minimum number = %d \n", add);

    getch();
}
