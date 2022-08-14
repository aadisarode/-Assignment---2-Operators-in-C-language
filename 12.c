/*Assume price of 1 USD is INR 76.23 write a program to 
take amount in INR and convert in into USD.
*/
#include<stdio.h>
int main(){
float INR;
printf("Enter a number :");
scanf("%f",& INR);
INR=INR/76.23;
printf("%f",INR);
return 0;
}