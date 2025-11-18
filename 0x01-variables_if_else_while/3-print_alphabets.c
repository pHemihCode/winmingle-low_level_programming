#include <stdio.h>
 /**
 * Author: Femi Akintan
 * Program: WinMingle Community C Training
 * Description: Printing alphabets in lowercase and uppercase
 */

int main(void){
    char n;
    char m;
    for (n = 'a'; n <= 'z'; n++){
    putchar(n);
    }
    for (m = 'A'; m <= 'Z'; m++){
    putchar(m);
    }
    putchar('\n');
    return (0);
}
