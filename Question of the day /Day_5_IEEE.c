// Write a program to calculate the simple interest for a given amount for a given time duration in years.
// Let the interest rate by 10% (if amount up to 10,000),
// 15% (if amount greater than 10,000 but less than or equal to 50,000) and 20% (for amount greater than 50,000).
// Take input of principal amount and time duration from the user.

#include<stdio.h>
int main(){
    int prin_amt, interest = 0;
    float simple_int, time_dur;
    printf("Enter principal amount and time duration(time in years): ");
    scanf("%d %f", &prin_amt, &time_dur);
    
    // interest calculation;
    if (prin_amt < 10000){
        interest = 10;
    } else if (prin_amt > 10000 && prin_amt <= 50000){
        interest = 15;
    } else if (prin_amt > 50000){
        interest = 20;
    }
    
    // simple interest
    simple_int = prin_amt * time_dur * interest / 100;
    printf("Simple interest: %f\n", simple_int);
}