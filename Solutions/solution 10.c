#include<stdio.h>
#include<conio.h>
void main()
 {
    int arr[10];
    int n=10;
    int i, j,a, swap;
    for(i=0; i<10; i++)
    {
        printf("Enter the value of arr[%d]:",i);
        scanf("%d",&arr[i]);

    }
    for (i = 0; i < (n - 1); i++) {
        a = i;
        for (j = i + 1; j < n; j++) {
            if (arr[a] > arr[j])
                a = j;
        }
        if (a != i) {
            swap = arr[i];
            arr[i] = arr[a];
            arr[a] = swap;
        }
    }
    printf("\n The Selection short is ");
    printf("\n==========================");
    for (i = 0; i < n; i++)
        printf("\n\t%d", arr[i]);
    getch();
}