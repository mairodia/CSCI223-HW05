// =======================================================================
// File: isascii.c
// =======================================================================
// Programmer: Jennifer King
// Date: 2/19/2018
// Professor: Scott Edwards
// Class: CSCI 223 | TR 4:30PM
// Description:
//              This program scans the input stream and determines if it consists
//              solely of ASCII characters or not.
// =======================================================================

#include <stdio.h>

int main(void)
{
    int inChar;
    int counter;
    int nonASCII;

    for(counter = nonASCII = 0; (inChar=getchar()) != EOF; ++ counter)
    {
        if(0x80 &inChar)
        {
            printf("NON-ASCII INPUT: %.2x detected at offset %#.2x\n", inChar, counter);
            ++ nonASCII;
        }
    }

    if(0 == nonASCII)
    {
        printf("The input stream was pure ASCII with total of %d bytes read.\n", counter);
    }
    else
    {
        printf("A total of %d non-ASCII were read.\n", nonASCII);
    }

    return 0;

} // end of main
