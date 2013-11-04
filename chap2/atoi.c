#include <stdio.h>

int _atoi(char[]);


int main()
{
    
    printf("The decimal value of \"1287\" is %d\n", _atoi("1287"));

    return 0; // return SUCCESS
}

int _atoi(char s[])
{
    int i, n;

    n = 0;

    for (i=0; s[i] >= '0' && s[i] <= '9'; i++)
    {
        n = 10 * n + (s[i] - '0'); 
    }
    
    return n;
}

