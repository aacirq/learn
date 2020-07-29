#include <stdio.h>

main() {
    long nc;
    nc = 0;
    /* while version */
    printf("while version\n");
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);

    /* for version */
    // nc = 0;
    printf("for version\n");
    for (nc = 0; getchar() != EOF; ++nc) ;
    printf("%ld\n", nc);
}