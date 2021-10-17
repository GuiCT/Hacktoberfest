#include <stdio.h>
#include <stdlib.h>

long long factorial (int n) {
    long long product = 1;
    int i = 2;

    for (; i <= n; i++) {
        product *= i;
    }

    return (product);
}

int main (void) {
    int input;
    char buffer[256];

    printf("Please enter an integer: ");
    scanf("%d", &input);

    printf("Factorial result is: %lld\n", factorial(input));
    return 0;
}
