#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int vet[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            printf("PAR\n");
        } else {
            printf("IMPAR\n");
        }
    }

    return 0;
}