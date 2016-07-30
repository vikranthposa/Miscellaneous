#include <stdio.h>

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
    int negY = add(~y, 1);
    return add(x,negY);
}

int multipyBinary(int x, int y)
{
    int result = 0;
    while (y != 0) {
        if (y & 1) { //if y is odd then condition
            result  = add(result,x); //result = result + x; 
        }
        x = x << 1;
        y = y >> 1;
    }
    return result;
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


