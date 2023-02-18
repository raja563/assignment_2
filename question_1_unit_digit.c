//WAP to print unit digit of a given number.
#include<stdio.h>
main()
{
    int n;
    printf("enter a number \n");
    scanf("%d",&n);
    printf("unit digit of number is : %d",n%10);
    getch();
    return 0;
}