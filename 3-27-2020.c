#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int isEOF(char *);

int main(void){
  
  char *W = "stay";
  char *T = "stay cool and program something while doing your part in preventing the spread of the virus";
  char *t = NULL;
  char *w = NULL;
  int wc = 0;
  int ct = 0;
  
  t = T;
  while(!isEOF(*t)){
    w = W;
    if (*t == ' ')
       t++;
    while(*w && *t && *t != ' ' && *w == *t){
      t++; w++; ct++;
    }
    if(ct == strlen(*W)){
      wc++;
      t++;
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
