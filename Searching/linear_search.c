/*
 * Worst Time Complexity - O(n)
 * Average Time Complexity - O(n)
 * Best Time Complexity - O(1)
 * Space Complexity - 1
*/

#include<stdio.h>
int main(){
    printf("Enter the Number of numbers: ");
    int n,i;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Numbers : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched : ");
    int search_num;
    scanf("%d",&search_num);
    int flag = 0;
    for(i=0;i<n;i++){
        if(arr[i]==search_num){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("Number Found at the position %d",i+1);
    }else{
        printf("The number is not Found in the list!!!");
    }
}