#include <stdio.h>
#include <string.h>

int has_exact_n_chars(const char *str, int n) {

    int i = 0;
    while (str[i]!= '\0')
    {
        i++; 
    }
    
    return i == n;

}