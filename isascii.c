// =======================================================================
// File: isascii.c
// =======================================================================
// Programmer: Jennifer King
// Date: 2/19/2018
// Professor: Scott Edwards
// Class: CSCI 223 | TR 4:30PM
// Description:
//              This program scans the input stream and determines if it con$
//              solely of ASCII characters or not.
// =======================================================================

#include <stdio.h>

int main(void)
{
    char *inChar;
    int result;
    int counter = 0;

    while((result = scanf("%c", inChar)) != EOF)
    {
        while(result != 1)
        {
            printf("NON-ASCII INPUT: %.2hhx detected at offset 0x%p",)
            counter ++;
        }
    }


    return 0;
}
