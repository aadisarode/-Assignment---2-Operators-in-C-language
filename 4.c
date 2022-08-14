/*/WAP to swap the values of two int 
type variables without using third variable*/
#include<stdio.h>
int main(){
int a , b;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
printf("a=%d b=%d",a,b); // a=30 b=40
b = b - a;
a = a + b;
b = a - b ;
printf("\na=%d b=%d\n",a,b);
return 0;
}