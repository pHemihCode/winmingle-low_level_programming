#include <stdio.h>
 /**
 * Author: Femi Akintan
 * Program: WinMingle Community C Training
 * Description: Printing  all the number of base 16 in lowercase
 */

int main(void){
    char n;
    for (n = 0; n < 16; n++){
      printf("%x",n);
    }
  printf("\n");
    return (0);
}
