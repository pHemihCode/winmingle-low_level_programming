#include <stdio.h>
 /**
 * Author: Femi Akintan
 * Program: WinMingle Community C Training
 * Description: Printing alphabets in  lowercase in reverse order
 */

int main(void){
    char n;
    for (n = 122; n >= 97; n--){
      putchar(n);
    }
    putchar('\n');
    return (0);
}
