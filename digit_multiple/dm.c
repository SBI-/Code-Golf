#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int digit_multiple(int n);

int main()
{
    int test[] = { 128, 12, 120, 122, 13, 32, 22, 42, 212, 213, 162, 204 };
    int length = sizeof(test) / sizeof(test[0]);

    for (int i = 0; i < length; ++i) {
        printf("%5d -> %d\n", test[i], digit_multiple(test[i]));
    }

    return EXIT_SUCCESS;
}

/*
 * http://codegolf.stackexchange.com/questions/41902/is-a-number-divisible-by-each-of-its-digits/
 */
int digit_multiple(int i)
{
    for(int n=i;i%10&&!(n%(i%10));i/=10);return!i;
}
