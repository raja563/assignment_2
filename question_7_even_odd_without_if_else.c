//7. Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    (num&1)?printf("%d is odd",num):printf("%d is even",num);
    getch();
    return 0;
}