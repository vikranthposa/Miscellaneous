
#include <stdio.h>

void ReverseWord(char *start, char *last)
{
  char t;
  char *first = start;
  while(last > first) {
    t = *first;
    *first = *last;
    *last = t;
    first++;
    last--;
  }
}

void getFirstAndLastIndex(char **first, char **last, char* temp)
{
  *first = temp;
  *last = temp;
  while(*(*last+1)!='\0' && *(*last+1)!=' ') {
    (*last)++;
  }
}

void chopWhiteSpaces(char **temp)
{
  while(**temp==' ') {
    (*temp)++;
  }
}

int main()
{
  char str[] = "Gm Sujana , whatsup";
  char *first = str, *last=str, *temp=str;
  while(*(last+1) != '\0')
  {
    last++;
  }
  ReverseWord(first,last);//reverse the total string
    while(*temp!='\0')
  {
    chopWhiteSpaces(&temp);
    getFirstAndLastIndex(&first,&last,temp); //reverse each word
    ReverseWord(first,last);
    temp = last+1;
  }
  printf("%s", str);
  return 0;
}
