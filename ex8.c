#include <stdio.h>

/* Ex 1-9. Program to copy input to output */

int main()
{
    
    int c;
    int blank_seen = 0;

    while((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\t') {
            
            if (!blank_seen)
                putchar(' ');

            blank_seen = 1;

        } else {
            
            putchar(c);
            blank_seen = 0;

        }
    }

    return 0;
}
