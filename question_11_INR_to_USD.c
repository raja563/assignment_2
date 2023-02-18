/* 11.assume price of 1 usd is inr 76.23 write a program to take the amount in
 INR and covert it into USD.*/
 #include<stdio.h>
 main()
 {
    float INR;
    float USD=0;
    printf("enter amout in rupee:");
    scanf("%f",&INR);
    USD=INR/73.23;
    printf("USD :%.3f",USD);
    getch();
    return 0;
 }