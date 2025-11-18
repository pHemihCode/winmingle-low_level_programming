#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
 * Author: Femi Akintan
 * Program: WinMingle Community C Training
 * Description: This is a C file that tells the user if a number is positive negative or zero 
 */
    int main(void)
    {
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if(n > 0){
    printf("%i is positive\n",n);
    }
    else if (n < 0)
    printf("%i is negative\n",n);
    else{
     printf("%i is zero\n",n);
    }
    return 0;
    }
