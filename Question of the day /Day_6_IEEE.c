// Write a program to reverse an array without using another array.
#include<stdio.h>
int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int temp, i=0, j=9,len=10;
    printf("Array before reversing : ");
    for (int n=0;n<len;n++){
        printf("%d ",arr[n]);
    }
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=arr[i];
        j--;
        i++;
    }

    printf("\n");
    printf("Array after reversing : ");
    for (int n=0;n<len;n++){
        printf("%d ",arr[n]);
    }
    printf("\n");
    return 0;
}
