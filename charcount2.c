#include <stdio.h>

/* 2nd version */

int main(void) {
    double nc;

    for (nc=0; gechar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
