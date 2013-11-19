#include <stdio.h>
#include <ctype.h>

/* atof: convert string s to double */

#define MAXLINE 100

double atof(char s[]);
int _getline(char line[], int max);

/* rudimentary calculator */
int main()
{
    double sum;
    char line[MAXLINE];
    
    sum = 0;
    while (_getline(line, MAXLINE) > 0)
    {
        printf("\t%g\n", sum += atof(line)); 
    }

    return 0; //return SUCCESS
}

double atof(char s[])
{
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ;

    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
    {
        i++;
    }

    for (val = 0.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
    }

    if (s[i] == '.')
    {
        i++;
    }
    
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0; 
    }
    
    return sign * val / power ;
}

int _getline(char line[], int max)
{
    int c, i;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }

    if (c == '\n')
    {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    
    return i;
}
