#include <stdio.h>

/* 1.5.2 This program counts character in input */

int main()
{
    long nc;

    nc = 0;

    while(getchar() != EOF)
        ++nc;

    //slightly modified to give meaningful log
    printf("The number of characters entered (including \\n) is %ld\n", nc);
    
    return 0;
}
