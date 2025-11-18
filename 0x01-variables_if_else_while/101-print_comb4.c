#include <stdio.h>
 /**
 * Author: Femi Akintan
 * Program: WinMingle Community C Training
 * Description: Printing all posible combination of  three digit numbers
 */

int main(void){
    int n;
    for (n = 100; n <= 999; n++){
     putchar((n / 100) + '0');
     putchar(((n / 10) % 10) + '0');
     putchar((n % 10) + '0');
      if(n != 999)
      putchar(',');
    }
  putchar('\n');
    return (0);
}
