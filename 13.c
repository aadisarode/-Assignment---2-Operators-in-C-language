/*write a program to take a three digit number from the user and  rotate
 its from the user and rotate its digit by one position towards the right.
*/
#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter a three digits number\n");
    scanf("%d", &x);
    y = x % 10;
    x = x / 10;
    z = 100 * y + x;
    printf("After rotating one position toward right\n%d", z);
    return 0;
}