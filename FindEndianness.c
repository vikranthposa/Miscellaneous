#include <stdio.h>
int main()
{
    unsigned int i = 1;
    char *c = (char *) &i;
    // caution : Character pointer should be taken so that it will pointer to the starting byte of interger
    // if we take directly value then it will be typecasted always to value 1 in this case
    //  char c = (char)i;   Here value of  "c" will be alwasy one
    
    if (*c)
        printf("B endian");
    else
        printf("L endian");
   
    return 0;
}
