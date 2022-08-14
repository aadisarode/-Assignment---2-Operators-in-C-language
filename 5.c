//write a program to input three digit number and display the sum of digit
int printf(const char*,...);
int main(){ 
int x=123;    
int rem=0 ,sum=0;

 rem = x % 10;  
 x = x / 10;
 sum = sum + rem ;

 rem = x % 10;
 x = x / 10;
 sum = sum + rem ;

 rem = x % 10;
 x = x / 10;
 sum = sum + rem;

 printf("%d\n",sum);
 return 0;
 }










