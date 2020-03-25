#include "stdio.h"

void ft_print_reverse_alphabet(void);
int main(int argc, char const *argv[]) {
  ft_print_reverse_alphabet();
  return 0;
}

void ft_print_reverse_alphabet(void){
  char ch;
  for(ch = 'z'; ch>='a'; ch--){
    putchar(ch);
  }
  putchar('\n');
}
