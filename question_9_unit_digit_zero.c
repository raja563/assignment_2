// 9.write a program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
main()
{
    int num,temp;
    printf("enter a number:\n");
    scanf("%d",&num);
    temp=num%10;
    num=num-temp;
    printf("%d",num);
    getch();
    return 0;
}