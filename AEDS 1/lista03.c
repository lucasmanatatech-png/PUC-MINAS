
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*
questao 1
int main (){ 
int n, i;
int numero, soma;
i=0;
soma=0;
printf("Quantos numeros voce deseja somar?\n");
scanf("%d", &n);
while (i < n) {
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    soma = soma + numero;
    i++; 
    }
    printf("a soma eh:%d\n", soma);
return 0;
}
/* 
questao 2

int main(){
int i,L,serie,proximo,atual,anterior;
    anterior = 0;
    atual = 1;
    i = 0;
    serie = 0;
    printf("Indique quantos elementos da serie de Fibonacci voce quer:\n");
    scanf("%d", &L);
    while (i<L)
    {
        printf(" %d", anterior);
        serie = anterior + atual;
        anterior = atual;
        atual = serie;
        i++;
}
return 0;
}

Questão 3
int main(){
int L,serie,proximo,atual,anterior;
    anterior = 0;
    atual = 1;
    serie = 0;
    printf("Indique um numero inteiro:\n");
    scanf("%d", &L);
    while (anterior < L)
    {
        printf(" %d",anterior);
        serie = anterior + atual;
        anterior = atual;
        atual = serie;
    }
return 0;
}

int main(){
    int n, a1,q,Ex;
    double An;
    printf("qual termo de uma PG voce quer?:\n");
    scanf("%d", &n);
    printf("entre com o valor da razao da PG:\n");
    scanf("%d", &q);
    Ex = q;
    printf("entre com o valor do 1 termo da PG:\n");
    scanf("%d", &a1);
    An = a1*pow(q,n-1);
    printf("O %d-esimo termo da PG e: %.2f\n", n, An); 
 // sem a utilizar a operação de exponenciação.
    for (int i = 0;i<n-1;i++){
        Ex = Ex * q;
    }
An = a1 * Ex;    
printf("%d", Ex);

// sem utilizar as operações de exponenciação e multiplicação.
    for (int i = 0;i<n;i++){
        

    }

}

*/





