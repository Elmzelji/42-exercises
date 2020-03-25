#include "stdio.h"

void ft_print_alpahbet(void);

int main(int argc, char const *argv[]) {
  ft_print_alpahbet();
  return 0;
}

void ft_print_alpahbet(void) {
  char ch;
  for (ch = 'a'; ch <= 'z'; ch++) {
    putchar(ch);
    putchar('\n');
  }
}
