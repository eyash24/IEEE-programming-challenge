// Write a program to list all the leap years from 1900 to 1920 using a do- while loop (with explanation).
#include<stdio.h>
int main(){
    int n_start=1900, n_end=1920;

    do{
        if(n_start%4==0){
            if(n_start%100==0){
                if(n_start%400==0){
                    printf("%d\n",n_start);
                }
            } else{
                printf("%d\n",n_start);
            }
        }
        n_start++;
    } while((n_start-1)<n_end);

}