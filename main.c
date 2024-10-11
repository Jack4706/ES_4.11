#include <stdio.h>

int main() {
    int i = 100;

    printf("Verranno visualizzati tutti i numeri pari da 0 a 100 in ordne decrescente:\n");

    while (i >= 0) {
        printf("%d\n", i);
        i -= 2;
    }
    return 0;
}
