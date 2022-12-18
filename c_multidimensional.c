//printing tables of 2 and 3 ad 2D ARRAY 
#include<stdio.h>

void storetables(int arr[][10], int n,int m, int number);

int main(){
    int tables[2][10]; //tables naam ka 2D array
    storetables(tables,0,10,2);
    storetables(tables,1,10,3);

    for(int i=0; i<10; i++){
        printf("%d \t",tables[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d \t",tables[1][i]);
    }
    return 0;
}

void storetables(int arr[][10], int n,int m, int number){ //n-->row(constant), m-->column
    for(int i=0; i<m; i++){ //rum from 0-10
        arr[n][i]= number*(i+1);
    }
}