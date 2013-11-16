#include <stdio.h>
#include <string.h>

/* trim: remove trailing blanks, tabs, newlines */

int trim(char s[]);

int main()
{
    char s[] = "Arun    ";
    
    printf("The length of %s is %ld\n", s, strlen(s));

    trim(s);

    printf("The length of %s is %ld\n", s, strlen(s));

    return 0; //return SUCCESS
}


int trim(char s[])
{
    int n;

    for (n = strlen(s) - 1; n >= 0; n--)
    {
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    }

    s[n + 1] = '\0';

    return n;
}
