#include <stdio.h>
int somaDigitos(int N){
    if(N<0){ //trata negativo
        N = -N;
    }
    if(N == 0){
        return 0;
    }
    return (N%10)+somaDigitos(N/10);// pega o último dígito e soma com o resto
}
int paraInteiro(char linha[]){
    int tamanho = 0;
    while (linha[tamanho] !='\0'){//calcula o tamanho da string
        tamanho++;
    }
    if (tamanho == 0){
        return 0;
    }
    int inicio = 0;
    int negativo = 0;
    if (linha[0] =='-'){ //trata negativo
        negativo = 1;
        inicio = 1;
    }
    int numero = 0;
    for (int i = inicio; i < tamanho;i++){
        numero = numero*10 + (linha[i] - '0');//converte o caractere para inteiro e adiciona ao número 
    }
    if (negativo){
        numero = -numero;
    }
    return numero;
}
int main(){
    char linha[100];
    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        int tamanho = 0;
        while (linha[tamanho] != '\0'){
            tamanho++;
        }
        if (tamanho >0 && linha[tamanho-1] == '\n'){// remove o caractere de nova linha se tiver
            linha[tamanho - 1] ='\0';
        }
        int N = paraInteiro(linha);
        printf("%d\n", somaDigitos(N));
    }
    return 0;
}