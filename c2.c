//INPUT SYNTAX --> %(datatype), &(variable)

//FORMAT SPECIFIERS
/* [%d] INT  printf("age is %d",variable_name);
   [%f] REAL printf("value of pi is %f, pi");
   [%c] CHAR printf("the character is %c,char");
  [%lf] DOUBLE /long float
*/
#include<stdio.h>
#include<conio.h>

int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);   
    printf("age is: %d",age);
    return 0;
}