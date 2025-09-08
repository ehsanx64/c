/*
** popen() function run a system program in background
**
** Run with: gcc -o popen popen.c && ./popen
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *ps;
    ps = popen("xterm -fa monospace -fs 11", "r");
    if (ps == NULL) {
        printf("Error");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
