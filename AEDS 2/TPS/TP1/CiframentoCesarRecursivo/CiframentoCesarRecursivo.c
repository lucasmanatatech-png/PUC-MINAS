#include <stdio.h>
#define TAM 1000
int igual(const char *a, const char *b){// compara duas strings caractere por caractere
    int i =0;
    while (a[i]!='\0'||b[i] !='\0'){// percorre ate o final de ambas as strings
        if (a[i]!= b[i]){
            return 0;
        }
        i++;
    }
    return 1;
}
void cifrarRec(const char *s, char *resp, int i) {
    if (s[i] =='\0') {//base da recursao chegou ao fim da string encerra a resposta
        resp[i] ='\0';
    }else{// desloca o caractere atual e avanca para o proximo
        resp[i] = (char)(s[i]+3);
        cifrarRec(s, resp, i+1);
    }
}
void cifrar(const char *s, char *resp){
    cifrarRec(s, resp, 0);//inicia a recursao com o indice 0
}
int main(){
    char linha[TAM];
    char cifrada[TAM];
    while (fgets(linha, sizeof(linha), stdin) != NULL){//le linha por linha ate o fim do arquivo
        int t = 0;
        while (linha[t] !='\0'){//calcula o tamanho da linha lida
            t++;
        }
        if (t > 0 && linha[t-1] == '\n'){//remove o \n do final da linha
            linha[t - 1] = '\0';
            t--;
        }
        if (igual(linha, "FIM") == 1) { //encontrou o FIM encerra o programa
            break;
        }
        cifrar(linha, cifrada);
        printf("%s\n", cifrada);
    }
    return 0;
}