/*write a program to input a number from the user and also input a 
digit append a digit in the number and print the resulting number.
*/
#include<stdio.h>
int main(){
int a ,b;
printf("enter a number:");
scanf("%d%d",&a,&b);
 a = a * 10 + b;
 printf("%d",a);
 return 0;
}