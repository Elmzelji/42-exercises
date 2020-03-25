#include "stdio.h"


void ft_putnbr(int nb);
int main(int argc, char const *argv[]) {
  ft_putnbr(500);
  return 0;
}

void ft_putnbr(int nb)
{
  if (nb < 0) {
    putchar('-');
    ft_putnbr(nb * (-1));
  } else if (nb >= 0 && nb < 10) {
    putchar(nb + 48);
  }
  else{
    ft_putnbr(nb/10);
    ft_putnbr(nb%10);  
  }

}
