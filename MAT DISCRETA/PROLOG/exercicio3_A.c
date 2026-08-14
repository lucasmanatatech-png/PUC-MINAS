#include <stdio.h>
#include <stdlib.h>
/*                                                                               EXERCICIO 3 LETRA A
                        (p:comer comidas picantes então q:ter sonhos estranhos) e (r:ocorrerem trovões então q:ter sonhos estranhos) e (!q:não tive sonhos estranhos)                                                                   
*/    
int main() {
    int p, q,r, resultado;
    int resp = 0;
    printf("p     q     r     (p --> q) ^ (r --> q) ^ (!q)\n");
    printf("----------------------------------------------\n");
    for (p = 1; p >=0; p--){
         for (q = 1; q >=0; q--){
            for (r = 1; r >=0; r--){
            resultado = (!p || q) && (!r || q) && (!q);
            printf("%d     %d     %d   |                 %d\n", p, q,r, resultado);
            if (resultado == 1){
                resp = 1;
          }
        }
      }
    }
    printf("Diante da tabela verdade acima a conlcusao eh:\n");
    printf("Nao comi comidas picantes e nao ocorreram trovoes.\n");
}