#include <stdio.h>
#define TAM 1000
int tamanho(const char *s) { //calcula o tamanho da string
    int n = 0;
    while (s[n] !='\0'){
        n++;
    }
    return n;
}

int igual(const char *a, const char *b) { // compara duas strings caractere por caractere
    int i = 0;
    while (a[i]!= '\0' ||b[i] !='\0') { //percorre ate o final de ambas as strings
        if (a[i]!= b[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}
int menorSubstringSemRepeticao(const char *s){//maior comprimento de substring sem caracteres repetidos 
    int ultima[256]={0}; // guarda a posicao seguinte a ultima ocorrencia de cada caractere
    int ini = 0;// inicio da janela atual
    int maior = 0;//maior comprimento encontrado ate agora
    for (int i = 0; i<tamanho(s);i++) {
        int c = (unsigned char)s[i]; // unsigned para evitar indices negativos para caracteres especiais
        if (ultima[c] >ini) { // caractere repetido dentro da janela ai desloca o inicio
            ini = ultima[c];
        }
        ultima[c] = i+1;//guarda a posicao seguinte a ocorrencia atual
        int comprimento = i-ini+1;
        if (comprimento > maior){
            maior = comprimento;
        }
    }
    return maior;
}

int main(){
    char linha[TAM];
    while (fgets(linha, sizeof(linha), stdin)!= NULL){
        int t = 0;
        while(linha[t]!= '\0'){ //calcula o tamanho da linha lida
            t++;
        }
        if(t> 0 && linha[t-1] =='\n'){//remove o \n do final da linha
            linha[t-1] = '\0';
            t--;
        }
        if(igual(linha, "FIM") == 1){
            break;
        }
        printf("%d\n", menorSubstringSemRepeticao(linha));
    }
    return 0;
}