#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int p;
    int i;

    int primes[50] = {0};
    int primeIdx = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 100; p = p + 2) // outer loop to determine if a number is prime
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;
        if (isPrime == true)
        {
            primes[primeIdx] = p;
            ++primeIdx;
        }
    }
    for (i = 0; i < primeIdx; ++i)
        printf("%i ", primes[i]);

    printf("\n");
    return 0;
}