// write a program to swap values of two int variable.
#include<stdio.h>
main()
{
    int a,b,temp;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("before  swapping value of a  is %d and value of b is %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping value of a  is %d and value of b is %d",a,b);
    getch();
    return 0;
}