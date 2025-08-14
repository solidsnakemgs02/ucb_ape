#include <stdio.h>
#include <time.h>

int main() {
    long long sum = 0;
    long long N = 1000000000; // 1 bilhão

    clock_t start = clock();

    for(long long i = 1; i <= N; i++) {
        sum += i;
    }

    clock_t end = clock();

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Soma = %lld\n", sum);
    printf("Tempo gasto: %.3f segundos\n", time_spent);

    return 0;
}