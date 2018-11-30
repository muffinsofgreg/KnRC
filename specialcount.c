#include <stdio.h>

/* counts blanks, tabs, and newlines */

int main(void) {
    int bl, tab, nl;
    bl = 0;
    tab = 0;
    nl = 0;

    int c;

    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++bl;
        else if (c == '\t')
            ++tab;
        else if (c == '\n')
            ++nl;
    printf("%d blanks\n%d tabs\n%d lines", bl, tab, nl);
}
