#include <stdio.h>
int main (void) {
    int num[] = { 1, 2, 3, 4, 5, 99, 1, 2, 3, 4, 5};
    unsigned int i;
    int accum;

    for (accum = 0, i = 0; i < sizeof(num)/sizeof(*num); i++)
        {
            accum ^= num[i];
            printf ("During %d\n", accum);
        }

    printf ("%d\n", accum);

    return 0;
}
