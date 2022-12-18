//SWAPPING using call by refrence 
#include<stdio.h>

int _swap(int *a,int *b){
    int t= *a;
    *a= *b;
    *b=t;
}
int main(){
    int x=4,y=5;
    printf("x= %d ,y=%d \n",x,y);
    _swap(&x,&y);
    printf("new x= %d ,y=%d",x,y);
}