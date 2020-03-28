#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int isEOF(char *);

int main(void){
  t = T;
  while(!isEOF(*t)){
    w = W;
    if (*t == ' ')
       t++;
    if(*t == *w){
      while(*w == *t && *t != ' '){
        t++; w++; ct++;
       }
      if(ct == strlen(*W)){
        wc++;
        t++;
      }
    }
  }
  return 0;
}
int isEOF(char *p){
  char *eof = "END_OF_TEXT";
  int ct = 0;

  while(*eof++ == *p++){
        ct++;
  }
  if(ct == strlen(eof))
     return 1;
  return 0;
}
