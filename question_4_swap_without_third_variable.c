//write a program to swap values of int variables without using a third variable.
#include<stdio.h>
main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("before swapping value of a is %d and value of b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping value of a is %d and value of b is %d",a,b);
    getch();
    return 0;
    
}