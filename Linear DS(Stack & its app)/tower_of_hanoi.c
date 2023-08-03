#include<stdio.h>
void towers(int num,char from,char to,char aux){
    if(num==1){
        printf("\n Move disk 1 from peg %c to peg %c", from, to);
        return;
    }
    towers(num-1,from,aux,to);
    printf("\n Move disk %d from peg %c to peg %c", num, from, to);
    towers(num-1,aux,to,from);
}
int main(){
    int num;
    printf("Enter the number of disks : ");
    scanf("%d",&num);
    printf("The Sequence is :\n");
    towers(num,'A','C','B');
}