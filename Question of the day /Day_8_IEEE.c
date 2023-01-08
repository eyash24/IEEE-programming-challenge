// Write a program to count the total number of words in a string.
#include<stdio.h>
int main(){
    char arr[100]="I like programming.\0";
    int count_words = 1,i=0;
    while(arr[i]!='\0'){
        if(arr[i]==' ' && arr[i+1]!=' '){
            count_words+=1;
        }
        i++;
    }
    printf("Count: %d\n",count_words);
}