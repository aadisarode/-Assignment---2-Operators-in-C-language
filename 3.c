//WAP to swap value of two int variable.
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter two number");
scanf("%d%d",&a,&b);
printf("a=%d b=%d",a,b);
c=a;
a=b;
b=c;
printf("\na=%d b=%d\n",a,b);
return 0;
}