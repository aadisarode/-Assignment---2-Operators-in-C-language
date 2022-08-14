//write to program to check whether the given number is even or odd using bitwise operator.
#include<stdio.h>
int main(){
int x;
printf("Enter a number :");
scanf("%d",& x);
if(x&1){
   printf("Odd\n");
}
else 
    printf("Even");
return 0;
}