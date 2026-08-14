#include <stdio.h>
#include <string.h>
#define TAM 1000
int Palindromo(const char *s) {
    int tam = strlen(s);
    int ini = 0, fim = tam - 1;
    while (ini < fim) {
        if (s[ini] != s[fim]) return 0;
        ini++;
        fim--;
    }
    return 1;
}

int main() {
    char palavra[TAM];
    char limpa[TAM];
    fgets(palavra, TAM, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    while (strcmp(palavra, "FIM") != 0) {
        normaliza(palavra, limpa);
        printf("%s\n", Palindromo(limpa) ? "SIM" : "NAO");
        if (!fgets(palavra, TAM, stdin)) break;
        palavra[strcspn(palavra, "\n")] = '\0';
    }
    return 0;
}
