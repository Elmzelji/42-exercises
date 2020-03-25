#include "stdio.h"

void ft_print_numbers(void);
int main(int argc, char const *argv[]) {
  ft_print_numbers();
  return 0;
}

void ft_print_numbers(void){
  char i='1';
  while (i <= '9') {
    putchar(i);
    i++;
  }
  putchar('\n');
}
