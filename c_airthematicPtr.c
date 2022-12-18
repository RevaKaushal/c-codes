//to get multiple outputs from one function we use pointers 
#include<stdio.h>
 
void dowork(int a, int b, int *sum, int *avg, int *mult){ //making pointers 
    *sum= a+b; //values at each pointer
    *avg= (a+b)/2;
    *mult= a*b;
}
int main(){
    int x=2, y=4;
    int sum, avg,mult;
    dowork(x,y,&sum,&avg,&mult);
    printf("sum=%d ,average= %d, multiplication=%d", sum,avg,mult);
    return 0;
}