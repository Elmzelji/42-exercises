#include "stdio.h"

void ft_print_comb2(void);
int main(int argc, char const *argv[]) {
  ft_print_comb2();
  return 0;
}

 void ft_print_comb2(void){
   char i = '0';
   char j = '0';

   char k = '0';
   char l = '0';


   for (i = '0'; i <= '9'; i++) {
     for (j = '0'; j <= '9'; j++) {
       for (k = '0'; k <= '9'; k++) {
          for (l = '0'; l <= '9'; l++) {


            if ((i <= j) && (j <= k) && (k <= l)) {
                if (!(i == j && j == k && k == l)) {
                  putchar(i); putchar(j); putchar(' '); putchar(k); putchar(l); putchar(' '); putchar(',');
                }
            }

          }

       }
     }
   }
   putchar('\n');


 }
