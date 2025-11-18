#include <stdio.h>
 /**
 * Author: Femi Akintan
 * Program: WinMingle Community C Training
 * Description: Printing all posible combination of single-digit number separated by comma and space
 */

int main(void){
    int n;
    for (n = 0; n < 10; n++){
     printf("%i",n);
      if(n != 9)
      printf(", ");
    }
  printf("\n");
    return (0);
}
