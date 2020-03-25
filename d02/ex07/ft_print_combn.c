#include <unistd.h>
#include <stdio.h>

void combCalc (int arr[], int data[], int start, int end, int index, int r) {
    if (index == r)
    {
        int j = 0;
        int a;
        static int ide = 0;
        if ( index == r )
        {
            write (1, ",", 1);
            write (1, " ", 1);
        }
        while ( j < r)
        {
            a = '0' + data[j];
            write (1, &a ,1);
            j++;
            ide++;
        }
        return;
    }

    int i = start;
    while ( i <= end && end - i + 1 >= r - index )
    {
        data[index] = arr[i];
        combCalc (arr, data, i+1, end, index + 1, r);
        i++;
    }
}
void printComb (int arr[], int n, int r) {
    int data[r];
    combCalc (arr, data, 0, n-1, 0, r);
}


void ft_print_combn (int r)
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = (&arr)[1] - arr;
    printComb (arr, n, r);
}


int main ()
{
  ft_print_combn(3);
  return 0;
}
