//6. Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
main()
{
    char ch;
    printf("enter a character \n");
    scanf("%c",&ch);
    printf("ASCII code of %c is %d",ch,ch);
    getch();
    return 0;
}