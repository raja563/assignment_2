/*write a program to input a number from the user and also input a digit .append a digit in the 
number and print the resulting number.
example:-number =243 and digit =9 then the resulting number is 2439 */
#include<stdio.h>
main()
{
    int num,temp;
    printf("enter first number:\n");
    scanf("%d",&num);
    printf("enter secound number who wants to add :\n");
    scanf("%d",&temp);
    num=num*100;
    num=num+temp;
    printf("your added number is %d",num);
    getch();
    return 0;

}