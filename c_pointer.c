// POINTER ,POINTER TO POINTER 
// format specifier--> %p[hexadecimal], %u[unsigned int]
// [ * ]--> value at address operator 
// [ * ]--> address operator 
// always make memory allocation diagram for better imagination
#include<stdio.h>

int main(){
    /*float price= 99.9;
      float *price= &price; */
    int age=22; 
    int *ptr= &age;
     
    //address
    printf("%p \n",&age);  
    printf("%u \n",&age);
    printf("%u \n",ptr);
    printf("%u \n\n",&ptr);

    //value stored at that address
    printf("%d \n",*ptr);
    printf("%d \n",age);
    printf("%d \n",*(&age));
    printf("%d \n\n",++(*ptr));

    int i=5;
    int *ptr1= &i;
    int **pptr=&ptr1;
    printf("%u \n",ptr1);
    printf("%u \n",&i);
    printf("%u \n",pptr); //new addresss stored of ptr1
    printf("%u \n",*pptr); 
    printf("%u \n\n",**pptr);  

    //pointer airthematic 
    printf("ptr%u\n",ptr);
    ++ptr;
    printf("ptr%u\n",ptr); //pointer mei 4 bytes[DT size] add hogi for next pointer position(array using) 
    --ptr;
    printf("ptr%u",ptr);
}
