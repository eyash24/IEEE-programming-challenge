// Write a program to accept n numbers and display the sum of highest and lowest numbers.

#include<stdio.h>
int main(){
    int n, arr[1000];
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");

    int max=arr[0], min=arr[0];
    for(int i=0; i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    int sum= max+min;
    printf("%d\n",sum); 
}