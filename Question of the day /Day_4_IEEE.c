//Write a function that checks whether the entered number is prime or not. 

#include<stdio.h>
int main(){
    int n, prime=1;
    scanf("%d", &n);
    if(n==1 || n==0){
        printf("Neither prime nor composite.\n");
        prime=2;
    } else if(n<0){
        prime=2;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        } 
    }
    if(prime==1){
        printf("Prime number.\n");
    } else if(prime==0) {
        printf("Not prime.\n");
    } 
}