//WAP to print a given number without its last digit .
#include<stdio.h>
main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("without last digit  number  is %d",num/10);
    getch();
    return 0;
}