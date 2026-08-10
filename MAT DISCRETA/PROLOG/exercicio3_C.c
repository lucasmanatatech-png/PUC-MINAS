#include <stdio.h>
#include <stdlib.h>
/*                                                                               EXERCICIO 3 LETRA C
                                (p:jogar futebol então q:estar dolorido no próximo dia) e (q:estar dolorido então r:usar a piscina) e (!r:não utilizar a piscina)                                                                   
*/    
int main() {
    int p, q,r, resultado;
    int resp = 0;
    printf("p     q     r     (p --> q) ^ (q --> r) ^ (!r)\n");
    printf("----------------------------------------------\n");
    for (p = 1; p >=0; p--){
         for (q = 1; q >=0; q--){
            for (r = 1; r >=0; r--){
            resultado = (!p || q) && (!q || r) && (!r);
            printf("%d     %d     %d   |                 %d\n", p, q,r, resultado);
            if (resultado == 1){
                resp = 1;
            
          }
        }
      }
    }
    printf("Diante da tabela verdade acima a conlcusao eh:\n");
    printf("Nao joguei futebol.\n");
}