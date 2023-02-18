/* write a program to take a three digit number from the user and rotate its digits by one position 
towords the right.*/
#include<stdio.h>
main()
{
    int num=123,y;
    //printf("enter a three digit number\n");
    //scanf("%d",&num);
    y=num%10;
    num=num/10;
    num=(y*100)+num;
    printf("%d",num);
    getch();
    return 0;

}