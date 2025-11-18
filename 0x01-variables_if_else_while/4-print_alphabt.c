#include <stdio.h>
 /**
 * Author: Femi Akintan
 * Program: WinMingle Community C Training
 * Description: Printing alphabets in  lowercase except letters  q and e followed by a new line
 */

int main(void){
    char n;
    for (n = 'a'; n <= 'z'; n++){
    if (n != 'q' && n != 'e')
    {
    putchar(n);
    }
    }
    putchar('\n');
    return (0);
}
