//ARRAY
//collection of similar datatypes stored at contiguous memory locations 
//nutshell--> one variable storing multiple data info
//syntax--> D.T(naam)[]={}
//0 based indexing 
//sizes of D.T ,int-->  4 bytes
//             ,float-->8 bytes
//             ,char--> 1 bytes
//work on array by POINTERS or indexing(arr[i])

#include<stdio.h>
 int main(){
    int adhaar[5];

    //input
    int *ptr=&adhaar[0];
    for(int i=0; i<=5; i++){
        printf("enter digit at %d index ",i);
        scanf("%d",ptr+i);
    }

    //output
    for(int i=0; i<=5; i++){
        printf("%d \t",adhaar[i]);
    }
    return 0;
}