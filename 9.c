//write a program to print  size of int, a char, a float and a double type variable
int printf(const char*,...);
int main(){
printf("size of int is %d\n",sizeof(int));
printf("size of float is %d\n",sizeof(float));
printf("size of char is %d\n",sizeof(char));
printf("size of double is %d\n",sizeof(double));
return 0;
}  