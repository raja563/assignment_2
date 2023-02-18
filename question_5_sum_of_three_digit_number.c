//write a program to input a three number digit number and display the sum of the digit.
#include<stdio.h>
main()
{
    int num,sum=0;
    printf("enter three digit number\n");
    scanf("%d",&num);
    sum=num%10;
    num=num/10;
    sum=(num%10)+sum;
    num=num/10;
    sum=num+sum;
    printf("sum of three digit number %d",sum);
    getch();
    return 0;
}