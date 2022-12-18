/* RECURSION FUNCTIONS 
 sum of n natural numbers 
 sum(n)= sum(n-1)+n
 fac(n)= fac(n-1)*n */

#include<stdio.h>
int sum(int n);    //PROTYPING-->(declaring function in advance)

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("the sum is %d",sum(n));
    return 0;
}
int sum(int n){  //RECURSION func-->self recalling func
    if (n==1){
        return 1;
    }
    int sum1= sum(n-1);
    int sum2= sum1+n;
    return sum2;
}