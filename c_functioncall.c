#include<stdio.h>

void printfunc(int n){    //call by value [makes COPIES],therefore diff address
    printf("address of n [value]%u",&n);
}

void _printfunc(int *n){ //call by refrence[works on original value ]
    printf("address of n [refrence] %u\n",n);
}
int main(){
    int n=4;
    printf("address of n %u\n",&n);
    _printfunc(&n); //refrence
    printfunc(n);   //value
} 