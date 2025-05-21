char* chomp(char* str){
  int i = 0;
  while(str[i] != '\n'){
    i ++;
  }
  str[i] = '\0';
  return str;
}
