//write a program to find the position of first 1 in LSB
#include<stdio.h>
int main(){
int n , count = 1;
printf ("Enter a number : ");
scanf("%d",& n);
while (n!=0){
if (n & 1)
{
    printf("%d",count);
    break;
}
else {
     count ++;
     n=n>>1;
}
}
return 0;
}