#include<stdio.h>
#include<math.h>

int main(){
   int a=(int)2.99999; //double stored as int (explicit,forced)
   double b=3;
   printf("%d \n",a);
   printf("%d",b);
}
//conversion is of two type -->IMPLICIT, EXPLICIT  [CHOTA BADHE D.T MEI STORE HOGA ]
//implicit[automatic]-->int stored as double  
//explicit[forced]-->double stored as int 