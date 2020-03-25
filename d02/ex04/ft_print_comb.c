#include "stdio.h"
//
void ft_print_comb(void);
int main(int argc, char const *argv[]) {
  ft_print_comb();
  return 0;
}
//
 void ft_print_comb(void){
   char i = '0';
   char j = '0';
   char k = '0';


   for (i = '0'; i <= '9'; i++) {
     for (j = '0'; j <= '9'; j++) {
       for (k = '0'; k <= '9'; k++) {
         if(i != j && j != k){
           if ((i < j) && (j < k)) {
             putchar(i);
             putchar(j);
             putchar(k);
             putchar(' ');
             putchar(',');
           }
         }

       }
     }
   }
 }

// void	ft_print_comb(void)
// {
// 	int number[3];
//
// 	number[0] = '0';
// 	while (number[0] <= '9')
// 	{
// 		number[1] = number[0] + 1;
// 		while (number[1] <= '9')
// 		{
// 			number[2] = number[1] + 1;
// 			while (number[2] <= '9')
// 			{
// 				putchar(number[0]);
// 				putchar(number[1]);
// 				putchar(number[2]);
// 				if (!(number[0] == '7' && number[1] == '8' && number[2] == '9'))
// 				{
// 					putchar(',');
// 					putchar(' ');
// 				}
// 				number[2]++;
// 			}
// 			number[1]++;
// 		}
// 		number[0]++;
// 	}
// }
