#include <stdio.h>

/* 2nd version */

int main(void) {
    int c;

    while ((c = getchar()) != EOF)
        if (c == '\t')
            putchar('\\t');
        if (c == '\n')
            putchar('\\n');
        if (c == '\\')
            putchar('\\');
        putchar(c);
}
