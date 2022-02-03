#include<stdio.h>
#include<conio.h>
void main()
{
    char s1[10],s2[10];
    int i,a,b,c;
    clrscr();
    printf("Enter the first string s1:");
    gets(s1);
    printf("\nEnter the second string s2:");
    gets(s2);
    a=strlen(s1);
    printf("\nThe lenth of first string is :%d",a);
    b=strlen(s2);
    printf("\nThe lenth of second string is :%d",b);
   
        c=strcmp(s1,s2);
        if(c == 0)
        printf("\nThe string is equal.");
        else
     printf("\nThe string is Not equal.");
        printf("\nThe value returned by strcamp() is: %u",c);
  
    getch();
}