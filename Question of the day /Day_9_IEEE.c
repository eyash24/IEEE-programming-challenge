// Write a program to check whether the given number is a palindrome or not.
#include<stdio.h>
#include<math.h>
int main(){
    int n, n_org, n_new=0;
    printf("Enter number: ");
    scanf("%d",&n);
    n_org = n;
    while(n>0){
        int r;
        r = n%10;
        n_new = n_new*10 + r;
        n = n/10;
    }

    if(n_org == n_new){
        printf("Palindrome number.\n");
    } else {
        printf("Not a palindrome number\n");
    }
    return 0;
}