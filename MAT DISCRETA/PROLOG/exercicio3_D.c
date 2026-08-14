#include <stdio.h>
#include <stdlib.h>
/*                                                                               EXERCICIO 3 LETRA B
    (p:ser inseto então q:possuir 6 patas) e (r:ser libélula então p:ser inseto) e (s:ser aranha então !q:não possuir 6 patas) e (s:ser aranha e r:ser libélula então t:aranha preda libélula)                                                                   
*/    
int main() {
    int p, q,r,s,t, resultado;
    int resp = 0;
    printf("p     q     r     s     t     (p --> q) ^ (r --> p) ^ (s --> !q) ^ (s ^ r --> t)\n");
    printf("----------------------------------------------------------------\n");
    for (p = 1; p >=0; p--){
         for (q = 1; q >=0; q--){
            for (r = 1; r >=0; r--){
                for (s = 1; s >=0; s--){
                    for (t = 1; t >=0; t--){
            resultado = (!p || q) && (!r || p) && (!s || !q) && (!(s && r) || t);
            printf("%d     %d     %d     %d     %d   |                 %d\n", p,q,r,s,t, resultado);
            if (resultado == 1){
                resp = 1;
              }
            }
          }
        }
      }
    }
    printf("Diante da tabela verdade acima a conlcusao eh:\n");
    printf("Não é possível concluir que aranhas predam libelulas.\n");
}