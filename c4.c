//how to multiply two float numbers
#include<stdio.h>
#include<conio.h>

int main(){
    double a,b,c; 
    printf("enter two float numbers: \n");
    scanf("%lf %lf",&a,&b);               //[%lf]-->Long Float/double
    c=a*b;                                //[.2lf] display float upto two decimals 
    printf("multiplication is: %lf * %lf= %.2lf",a,b,c);
    return 0;
}