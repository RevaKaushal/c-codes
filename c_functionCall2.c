//FUNCTION CALL --> CALL BY VALUE , CALL BY REFRENCE 
#include<stdio.h>

//call by value -->[not MODIFIED original value]
int square(int n){ 
    int sq= n*n;
    printf("square= %d \n",sq);
}

//call by refrence-->[MODIFIED original value ]
void _square(int* n){
    *n=(*n)*(*n);  //value at address of pointer n 
    printf("square= %d \n",*n);
    
}

int main(){
    int number=4;
    square(number);
    printf("number; call by value is %d \n",number);//make changes to only COPIES OF VARIABLE 
    
    _square(&number);
    printf("number; call by refrence is %d",number);
    return 0;
}