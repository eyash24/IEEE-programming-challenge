/*
Create a program to display a pattern, such as a right-angle triangle, using a hashtag. The pattern should be something like: 
#
##
###
####
*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
