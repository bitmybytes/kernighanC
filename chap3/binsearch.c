#include <stdio.h>

/* 
 * Binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]
 *
 */

int binsearch(int x, int v[], int n);

int main()
{
    
    int v[]   = {1, 5, 17, 20, 40, 55, 60, 71, 84};
    int v_len = 9; 

    printf("The index of 20 in the array is %d\n", binsearch(20, v, v_len));
    printf("The index of 33 in the array is %d\n", binsearch(33, v, v_len));

    return 0; //return SUCCESS
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low  = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (x < v[mid]) {
        
            high = mid - 1;

        } else if (x > v[mid]) {

            low = mid + 1;

        } else {
            
            return mid;
            
        }
    }
    
    return -1;
}
