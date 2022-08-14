//write a program to make the last digit of an number stored in a variable zero
#include<stdio.h>
int main(){
int x;
printf("enter a number :");
scanf("%d",& x);
 
printf("after last digit zero the number is %d",(x/10)*10);
return 0;
}