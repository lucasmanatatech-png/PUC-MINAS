#include <stdio.h>
int main(){
    char palavra[300], invertida[300];
    while (fgets(palavra, sizeof(palavra), stdin) != NULL){ // repete enquanto houver linhas a serem lidas
        int tamanho= 0;
        for (int i =0;palavra[i] != '\0';i++) {//pega o tamanho da palavra
            tamanho++;
        }
        if (tamanho >0 && palavra[tamanho-1] =='\n'){//trata quebra de linha estilo linux
            palavra[tamanho-1] ='\0';
            tamanho--;
        }
        if (tamanho >0 && palavra[tamanho - 1]== '\r'){ //trata quebra de linha estilo windows
            palavra[tamanho-1] = '\0';
            tamanho--;
        }
        int igual= 1; // variavel para verificar se a palavra é "FIM"
        if(tamanho!= 3){//se o tamanho da palavra for diferente de 3 ela nao é FIM
            igual= 0;
        } else {
            for(int i= 0; i<3;i++){//se o tamanho for 3 verifica se a palavra é FIM
                if (palavra[i]!= "FIM"[i]){
                    igual= 0;
                    break;
                }
            }
        }
        if(igual == 1){
            break;
        }
        for(int i= 0; i<tamanho;i++){//inverte a palavra
            invertida[i] = palavra[tamanho-1-i];//pega a ultima letra da palavra e coloca na primeira posição da palavra invertida depois pega a penultima letra da palavra e coloca na segunda posição da palavra invertida e assim por diante
        }
        invertida[tamanho] ='\0'; //adiciona o caractere nulo no final da palavra invertida para indicar o fim da string
        int t2 = tamanho;
        while (t2 > 0 && invertida[t2 -1] ==' '){//remove os espaços em branco do final da palavra invertida
            invertida[--t2] ='\0';
        }
        printf("%s\n", invertida);
    }
    return 0;
}