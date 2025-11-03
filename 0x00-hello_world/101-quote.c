#include <unistd.h>
/**
 * Author: Femi Akintan
 * Program: WinMingle Community C Training
 * Description: This function  needs to print to the standard error
 */

int main()
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int len = 0;
    while (message[len] != '\0')
    {
    len ++;
    }
    write(2,message,len);
    return 1;
}
