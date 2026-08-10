#include <stdio.h>
#include <stdlib.h>
/*                                                                               EXERCICIO 2 LETRA C
                                (p ou q ou r) e (p ou !q ou !s) e (q ou !r ou s) e (!p ou r ou s) e (!p ou q ou !s) e (p ou !q ou !r) e (!p ou !q ou s) e (!p ou !r ou !s)                                                                   
*/    
int main(){
    int p, q,r,s, resultado;
    int resp = 0;
    printf("p     q     (p v q v r) ^ (p v !q v !s) ^ (q v !r v s) ^ (!p v r v s) ^ (!p v q v !s) ^ (p v !q v !r) ^ (!p v !q v s) ^ (!p v !r v !s)\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    for (p = 1; p >=0; p--){
         for (q = 1; q >=0; q--){
            for (r = 1; r >=0; r--){
                for (s = 1; s >=0; s--){
            resultado = (p || q || r) && (p || !q || !s) && (q || !r || s) && (!p || r || s) && (!p || q || !s) && (p || !q || !r) && (!p || !q || s) && (!p || !r || !s);
            printf("%d     %d     %d     %d   |                                              %d\n", p, q,r,s, resultado);
            if (resultado == 1){
                resp = 1;
            }
          }
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