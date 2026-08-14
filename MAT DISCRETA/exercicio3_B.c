#include <stdio.h>
#include <stdlib.h>
/*                                                                               EXERCICIO 3 LETRA B
            (p:ser cientista da computação então q:ter um computador pessoal) e (r:Ralph então !q:não ter um computador pessoal) e (s:Ann então q:ter um computador pessoal)                                                                   
*/    
int main() {
    int p, q,r,s, resultado;
    int resp = 0;
    printf("p     q     r     s     (p --> q) ^ (r --> !q) ^ (s --> q)\n");
    printf("----------------------------------------------\n");
    for (p = 1; p >=0; p--){
         for (q = 1; q >=0; q--){
            for (r = 1; r >=0; r--){
                for (s = 1; s >=0; s--){
            resultado = (!p || q) && (!r || !q) && (!s || q);
            printf("%d     %d     %d     %d   |                 %d\n", p, q,r,s, resultado);
            if (resultado == 1){
                resp = 1;
            }
          }
        }
      }
    }
    printf("Diante da tabela verdade acima a conlcusao eh:\n");
    printf("Ralph nao eh cientista da computacao\n");
}