#include <stdio.h>

/* count characters in input; 1st version */

int main(void) {
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("\n%ld\n", nc);

    printf("%d\n", EOF);
}
