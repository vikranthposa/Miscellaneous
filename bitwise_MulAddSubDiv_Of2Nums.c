#include <stdio.h>

int multipyBinary(int x, int y)
{
    int result = 0;
    while (y != 0) {
        if (y & 1) {
            result  = result + x;
        }
        x = x << 1;
        y = y >> 1;
    }
    return result;
}

int add(int x, int y)
{
    int carry;
    while(y!=0) {
        carry = x&y;
        x = x^y ;
        y = carry<<1;
    }
    return x;
}

int sub(int x, int y)
{
     //to do x-y , so negate and 1 for y so it becomes -y
    return x+((~y)+1);
}

int main()
{
    int x , y, result;
    
    printf("Enter x value");
    scanf("%d" , &x);
    printf("Enter y value");
    scanf("%d" , &y);
    
    result = add(x,y);
    printf("%d + %d = %d \n", x,y, result);
    
    result = sub(x,y);
    printf("%d - %d = %d \n", x,y, result);
    
    result = multipyBinary(x, y);
    printf("%d * %d = %d \n", x,y, result);
    
    return 0;
}


