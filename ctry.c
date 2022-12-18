//CONDITIONAL OPERATORS :[ternary ,switch]
#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    a>b? printf("a is greater than b"): printf("b is greater than a ");
    return 0;
}