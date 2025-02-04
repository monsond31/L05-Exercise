//this function will return one if the string has exactly n characters
#include <stdio.h>
#include <string.h>

int main(){

    char start = 'h';
    char end = 'o';
    char s[] = "hello";
    int n = 5;
    int total = strlen(s);
    if (total == n){
        printf("it has n characters\n\n");
        }
    if (s[0] == start){
        printf("the string starts with %c\n\n", start);
    }
    if (end == s[total-1]){
        printf("the string ends with %c",end);
    }
    
    return 0;
        
    }

