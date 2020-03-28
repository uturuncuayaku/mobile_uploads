int isEOF(char *);

int main(void){
  t = T;
  w = W;
  while(!isEOF(*T)){
    if (*t == ' ')
       t++;
    if(*t == *w){
      while(*w && *t != ' '){
        t++; w++; ct++;
       }
      if(ct == strlen(*W)){
        wc++;
        w = W;
        t++;
      }
    T++;
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
