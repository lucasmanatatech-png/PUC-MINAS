#include <stdio.h>
#define TAM 1000
int tamanho(const char *s){ // calcula o tamanho da string para comparar se sao anagramas 
    int n = 0;
    while (s[n]!= '\0'){
        n++;
    }
    return n;
}
int igual(const char *a, const char *b){ // compara duas strings 
    while (*a !='\0'|| *b != '\0') { // percorre as duas strings ate no final de ambas 
        if (*a !=*b) { // se os caracteres forem diferentes retorna 1
            return 1; 
        }
        a++;
        b++;
    }
    return 0;
}
char paraMinusculo(char c){
    if (c >='A' &&c <='Z'){// se for maisculo vira minusculo
        return c+ 32;
    }
    return c; 
}
int anagrama(const char *a, const char *b) {// dois pointeiros pois nao quero alterar as strings originais
    if (tamanho(a) !=tamanho(b)){ //ja descarto se forem de tamanhos diferentes
        return 0;
    }
    int contA[256] = {0};
    int contB[256] = {0};
    for (int i = 0;a[i] != '\0'; i++){ // Conta as ocorrencias de cada caractere nas duas strings na tabela ascii
        contA[(unsigned char)paraMinusculo(a[i])]++;//unsigned char para evitar problemas com caracteres negativos
        contB[(unsigned char)paraMinusculo(b[i])]++;
    }
    for (int i = 0; i < 256; i++){ // Compara as contagens das duas strings
        if (contA[i] != contB[i]){//se alguma letra tiver contagem diferente nao sao anagramas 
            return 0;
        }
    }
    return 1;
}
int main(){
    char a[TAM];
    char b[TAM];
    scanf("%s", a);
    while (igual(a, "FIM")!= 0){ //le de 2 em 2 strings ate "FIM"
        scanf("%s", b);
        if (anagrama(a, b)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        scanf("%s", a);
    }
    return 0;
}
