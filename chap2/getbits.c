#include <stdio.h>

unsigned getbits(unsigned, int, int);

int main()
{
    printf("getbits(8, 4, 3) is %d\n", getbits(8, 4, 3)); // has to print 2

    return 0; //return SUCCESS
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    // If p = 4 and n = 3 then,
    // 4 + 1 - 3 = 2 ; so shift twice so bits at position 4
    // , 3 and 2 are moved to position 2, 1, 0 (right adjusted)

    return (x >> (p+1-n)) & ~(~0 << n);
}
