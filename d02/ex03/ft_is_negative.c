#include "stdio.h"

void ft_is_negative(int n);
int main(int argc, char const *argv[]) {
  return 0;
}

void ft_is_negative(int n){
  if(n<0) putchar('N');
  else  putchar('P');
}
