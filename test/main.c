#include <stdio.h>
#include <stdlib.h>

#include "../lib.h"


int main(void) {
    char* string = (char*) malloc(4 * sizeof(char));
    string[0] = 'c';
    string[1] = 'a';
    string[2] = 't';
    string[3] = '\0';
    reverse_char_array(string, 3);
    puts(string);
    free(string);
    return 0;
}
