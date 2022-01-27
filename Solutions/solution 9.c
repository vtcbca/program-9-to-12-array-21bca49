#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,j,p;
    clrscr();
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\n_________________________\n");
    for(i=0; i<n; i++)
    {
        printf("Enter the value of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
        }


    }
    printf("\nShorted Array:");
    printf("\n==============");
    for(i=0; i<n; i++)
    {
        printf("\n\t%d",a[i]);
    }
    getch();
}