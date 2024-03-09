#include <stdio.h>

int main() {
    int p = 0, n, i;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n/2; i++) {
        if (n % i == 0)
            p = p + i;
    }

    if (p == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    return 0;
}

