#include <stdio.h>
#include <stdlib.h>
/*                                                                               EXERCICIO 1 LETRA C
                                                                    (p se somente se q) e (!p se somente se q) 
(p <--> q)  =  (p == q)                                                                   
*/    
int main(){
    int p, q, resultado;
    int resp = 0;
    printf("p     q     (p <--> q) ^ (!p <--> q)\n");
    printf("------------------------------------\n");
    for (p = 1; p >=0; p--){
         for (q = 1; q >=0; q--){
            resultado = (p == q) && (!p == q);
            printf("%d     %d   |               %d\n", p, q, resultado);
            if (resultado == 1){
                resp = 1;
            }
         }
    }
    if (resp == 1){
        printf("\nA proposicao eh satisfativel!\n");
    } else {
        printf("\nA proposicao eh uma contradicao.\n");
    }
    return 0;
}