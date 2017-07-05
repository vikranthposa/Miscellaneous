/*
 Big-endian is an order in which the "big end" (most significant value in the sequence) is stored first (at the lowest storage address)
 For Networking ---- Standard byte order for networks is big endian, also known as network byte order.
*/

#include <stdio.h>
int main()
{
    unsigned int i = 0x10FE;
    char *c = (char *) &i;
    // caution : Character pointer should be taken so that it will pointer to the starting byte of interger
    // if we take directly value then it will be typecasted always to value 1 in this case
    //  char c = (char)i;   Here value of  "c" will be alwasy one
    
    if (*c == 0xFE)
        printf("Little endian");
    else
        printf("Big endian");
   
    return 0;
}
