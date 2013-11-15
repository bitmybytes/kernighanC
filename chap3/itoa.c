#include <stdio.h>
#include <string.h>

/* itoa: convert n to characters in s */
void itoa(int n, char s[]);
void reverse(char s[]);


int main()
{
    char s[6];
    
    itoa(1234, s);

    printf ("The string of 1234 is %s\n", s);
    
    itoa(12456, s);

    printf ("The string of 12456 is %s\n", s);

    return 0; //return SUCCESS
}

void itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)
    {
        n = -n;
    }

    i = 0;

    do {

        s[i++] = n % 10 + '0';

    } while ((n /= 10) > 0);

    if (sign < 0)
    {
        s[i++] = '-';
    }

    s[i] = '\0';

    reverse(s);
}

void reverse(char s[])
{
    int s_len = strlen(s);
    int i, j;  
    char c;

    for (i = 0, j = s_len - 1; i < j ; i++, j--)
    {
        c    = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
