#include <stdio.h>
#define TAM 1000
int igual(const char *a, const char *b) {//compara duas strings caractere por caractere
    int i = 0;
    while (a[i] !='\0'||b[i] !='\0') {// percorre ate o final de ambas as strings
        if (a[i]!=b[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}
int ehLetra(char c) { // verifica se o caractere eh uma letra entre A-Z ou a-z
    return (c>= 'A'&& c <='Z')||(c>= 'a'&& c<= 'z');
}
int ehVogal(char c) { // verifica se o caractere eh uma vogal 
    if (c >= 'A' &&c <= 'Z') { //converte a letra maiuscula para minuscula
        c += 32;
    }
    return (c== 'a'|| c == 'e' ||c == 'i'|| c == 'o'|| c == 'u');
}
int soVogaisRec(const char *s, int i) {
    int resp;
    if (s[i] =='\0') { // base da recursao: percorreu a string inteira
        resp = 1;
    } else if(!ehVogal(s[i])) { // encontrou um caractere que nao eh vogal
        resp = 0;
    } else{ // avanca para o proximo caractere
        resp = soVogaisRec(s, i + 1);
    }
    return resp;
}
int soVogais(const char *s) {
    return soVogaisRec(s, 0);
}
int soConsoantesRec(const char *s, int i){
    int resp;
    if (s[i] == '\0') {//base da recursao percorreu a string inteira
        resp = 1;
    } else if (!ehLetra(s[i]) || ehVogal(s[i])) {//encontrou um caractere que nao eh consoante
        resp = 0;
    } else { // vanca para o proximo caractere
        resp = soConsoantesRec(s, i+1);
    }
    return resp;
}
int soConsoantes(const char *s){// metodo que chama o recursivo pela primeira vez inicializando o contador
    return soConsoantesRec(s, 0);
}
int soDigitosRec(const char *s, int i){//metodo recursivo que verifica se a string representa um numero inteiro, percorrendo caractere por caractere
    int resp;
    if (s[i] == '\0') { // base da recursao percorreu a string inteira
        resp = 1;
    } else if(s[i] < '0'|| s[i] >'9') {//encontrou um caractere que nao eh digito
        resp = 0;
    } else{ //avanca para o proximo caractere
        resp = soDigitosRec(s, i+1);
    }
    return resp;
}
// metodo que chama o recursivo pela primeira vez inicializando o contador
int soDigitos(const char *s){
    return soDigitosRec(s, 0);
}
int separadoresRec(const char *s, int i){//metodo recursivo que verifica se a string representa um numero real, contando os separadores
    int resp;
    if (s[i] =='\0') {//base da recursao percorreu a string inteira
        resp = 0;
    }else if (s[i] == ',' || s[i] =='.') {// encontrou um separador conta e avanca
        resp = 1 + separadoresRec(s, i+1);
    }else if(s[i]>= '0' &&s[i]<= '9') { // digito apenas avanca
        resp = separadoresRec(s, i + 1);
    }else{ // caractere invalido marca como nao real
        resp = 2;
    }
    return resp;
}
// metodo que chama o recursivo pela primeira vez, inicializando o contador
int soNumeroReal(const char *s){
    int resp = separadoresRec(s, 0);
    return (resp<=1);
}
int main(){
    char linha[TAM];
    while (fgets(linha, sizeof(linha), stdin) != NULL){ //le linha por linha ate o fim do arquivo
        int t = 0;
        while (linha[t] != '\0') { //calcula o tamanho da linha lida
            t++;
        }
        if (t > 0 && linha[t - 1] == '\n') { //remove o \n do final da linha
            linha[t - 1] = '\0';
            t--;
        }
        if (igual(linha, "FIM") == 1) { // ncontrou o FIM encerra o programa
            break;
        }
        if(soVogais(linha)){
            printf("%s ", "SIM");
        }else{
            printf("%s ", "NAO");
        }
        if(soConsoantes(linha)){
            printf("%s ", "SIM");
        }else{
            printf("%s ", "NAO");
        }
        if(soDigitos(linha)){
            printf("%s ", "SIM");
        }else{
            printf("%s ", "NAO");
        }
        if(soNumeroReal(linha)){
            printf("%s\n", "SIM");
        }else{
            printf("%s\n", "NAO");
        }
    }
    return 0;
}