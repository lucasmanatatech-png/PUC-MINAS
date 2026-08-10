#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Questao 1
int main (){
    int num1, num2, dif;
    float div;
    printf("primeiro numero:\n");
    scanf("%d", &num1);
    printf("segundo numero:\n");
    scanf("%d", &num2);
    dif = num1 - num2;
    printf("sua diferenca eh:%d\n",dif);
    if (num2 != 0){
        div = num1/num2;
        printf("a div do primeiro pelo segundo eh:%.2f",div);

    }
    return 0;
}
questao 2
int main(){
    int num;
    printf("escreva um numero inteiro:\n");
    scanf("%d", &num);
    if (num%7 == 0){
        printf("numero divisivel por 7\n");
        }else{
        printf("numero nao divisivel por 7\n");
    }
return 0;
}
questao 3
int main(){
    double num1, num2, num3;
    printf("primeiro numero:\n");
    scanf("%lf", &num1);
    printf("segundo numero:\n");
    scanf("%lf", &num2);
    printf("terceiro numero:\n");
    scanf("%lf", &num3);
    //Para determinar se um número pode ser um lado de um triângulo,
    //você deve verificar se ele é menor que a soma dos outros dois lados. Se for,
    //então, o número pode ser um lado do triângulo
    if(num1 < num2+num3 && num2<num1+num3 && num3<num2+num1 ){
        printf("seus numeros podem formar o lado de um triangulo\n");
    }else{
        printf("seus numeros nao podem formar o lado de um triangulo\n");
    }
        return 0;
}
questao 4
int main (){
    double a, b, raiz;
    printf("indique o coeficiente a da sua equacao de 1 grau\n");
    scanf("%lf", &a);
    printf("indique o coeficiente b da sua equacao de 1 grau\n");
    scanf("%lf", &b);
    raiz = -b/a;
    if(a != 0){
        printf("sua raiz eh:%.2lf\n", raiz);
    }else{
        printf("sua equacao n tem raiz\n");
    }
    return 0;
}
questao 5
int main(){
    double a1, b1, c1, a2, b2, c2, D, Dx, Dy;
    printf("indique o primeiro coeficiente da sua equacao 2x2\n");
    scanf("%lf", &a1);
    printf("indique o segundo coeficiente da sua equacao 2x2\n");
    scanf("%lf", &b1);
    printf("indique o primeiro termo independete a da sua equacao 2x2\n");
    scanf("%lf", &c1);
    printf("indique o primeiro coeficiente da sua segunda equacao 2x2\n");
    scanf("%lf", &a2);
    printf("indique o segundo coeficiente da sua segunda equacao 2x2\n");
    scanf("%lf", &b2);
    printf("indique o segundo termo independete a da sua equacao 2x2\n");
    scanf("%lf", &c2);
    Dy = (a1*c2) - (a2*c1);
    Dx = (c1 *b2) - (c2*b1);
    D = (a1 * b2) - (a2 * b1);
    if (D != 0){
        printf("Sistema com solucao unica");
    } else if (Dx == 0 && Dy == 0) {
    printf("O sistema possui infinitas solucoes (SPI).\n");
    } else {
    printf("O sistema nao possui solucao (SI).\n");
}

}
questao 6
int main (){
    float a,b,c,delta;
    printf("indique o coeficiente a da sua equacao de 2 grau\n");
    scanf("%f", &a);
    printf("indique o coeficiente b da sua equacao de 2 grau\n");
    scanf("%f", &b);
    printf("indique o coeficiente c da sua equacao de 2 grau\n");
    scanf("%f", &c);


    delta = pow(b,2) - 4 *a*c;
    if(delta >= 0){
        printf("Possui raizes reais \n");
    }else{
        printf("Possui raizes imaginarias\n");

    }
    return 0;
}
questao 7
int main(){
    int num1, num2;
    printf(" Digite o primeiro valor : \n");
    scanf("%d", &num1);
    printf(" Digite o segundo valor : \n");
    scanf("%d", &num2);
    if (num1>num2){
        printf("Maior valor :%d\n",num1);
    }else if(num2>num1){
        printf("Maior valor:%d\n",num2);
    }else{
       printf("numeros iguais");
    }
return 0;

}
questao 8
int main(){
    float a,b,c;
    printf("Indique os lados do seu triangulo (a,b,c)\n");
    scanf("%f %f %f",&a, &b, &c);
    // EQUILÁTERO, ISÓSCELES OU ESCALENO
    if(a < b+c && b<a+c && c<b+a ){
         if (a==b && b==c){
            printf("triangulo equilatero\n");
        }else if (a==b && b!=c){
            printf("triangulo Isoceles\n");

        }else{
            printf("Triangulo escaleno");
    }
    }else{
        printf("Triangulo nao possivel\n");
    }
}
questao 9
int main (){
    float a,b,c,maior;
    printf("Indique os lados do seu triangulo (a,b,c)\n");
    scanf("%f %f %f",&a, &b, &c);
    if(a < b+c && b<a+c && c<b+a ){
        if ( a >= b && a >= c ) {
            maior = a;
            a=b;
            b=c;
        }else if(b >= a && b >= c ){
            maior=b;
            b=a;
            a=c;
        }else{
            maior = c;
        }
        if ( maior * maior == a * a + b * b ) {
            printf ( "O triangulo eh retangulo\n" );
        } else if ( maior * maior < a * a + b * b ) {
            printf ( "O triangulo eh acutangulo\n " );
        } else {
            printf ( "O triangulo eh obtusangulo\n" );
        }
    }else{
       printf("Triangulo nao possivel\n");
    }
    return 0;
}
questao 10
int main(){
    int dia,mes,ano;
    printf("indique o dia,mes e ano(D M A):\n");
    scanf("%d %d %d", &dia,&mes,&ano);
    if ((ano%4 == 0 && ano%100 != 0) || (ano%400 == 0)){
        printf("ano bissexto");
        }else{
            printf("ano nao bissexto");
        }

 }

questao 11
int main(){
    float num1, num2;
    printf("indique dois valores reais:\n");
    scanf("%f %f", &num1, &num2);
    if (num1>num2){
        printf("%.0f maior que %.0f\n", num1, num2);
    }else if (num2>num1){
        printf("%.0f maior que %.0f\n", num2, num1);
    }else{
        printf("numeros iguais!!\n");
    }
    return 0;
    }
questao 12
int main(){
    char c1,c2;
    printf("indique dois caracteres:\n");
    scanf("%c %c", &c1, &c2);
    if (c1<c2){
        printf("Em ordem alfabetica:%c %c",c1,c2);
    }else if(c1>c2){
        printf("Em ordem alfabetica:%c %c",c1,c2);
    }else{
        printf("dois caracteres iguais\n");
    }
    return 0;
    }
 questao 13
 int main(){
    float num1, num2, resp;
    printf("Indique dois valores reais:\n");
    scanf("%f %f",&num1,&num2);
    if (num2 != 0){
        resp = num1/num2;
        printf("o quociente do primeiro pelo segundo:%.2f", resp);
    }else{
        printf("nao eh possivel dividir por 0");
    }
 }
 questao 14
 int main(){
    float num1;
    printf("indique um numero real:\n");
    scanf("%f",&num1);
    if (num1>0){
        printf("numero maior que 0\n");
    }else if (num1 < 0){
        printf("numero menor que 0\n");
    }else{
        printf("numero igual a zero");
    }
    return 0;
    }

questao 15
int main(){
    int num1,resp;
    printf("indique um numero intero:\n");
    scanf("%d",&num1);
    if (num1%2 == 0){
        resp = pow(num1,2);
        printf("o quadrado do seu numero eh:%d\n", resp);
    }else{
        resp = pow(num1,3);
        printf("o cubo do seu numero eh:%d\n",resp);
    }
    return 0;
}


questao 16
int main(){
    float lr1,lr2,diagonal,raio,areaC,pi,areaQ,lQ,areaCC;
    int num;
    pi = 3.14;
    printf("Indique um numero intero\n");
    scanf("%d",&num);
    if (num == 1 || num == 2){
        printf("indique as medidas dos lados de um retangulo:\n");
        scanf("%f %f",&lr1 ,&lr2);
        diagonal = sqrt(pow(lr1,2)+pow(lr2,2));
        raio = diagonal/2;
        areaC =  pi * ((pow(lr1,2)+pow(lr2,2))/4);
        printf("a area do circulo circunscrito a este retangulo eh:%.2f",areaC);
    }else if(num == 3 || num == 4 || num == 5){
        printf("indique a medida do raio de um circulo:\n");
        scanf("%f",&raio);
        areaQ = 2*pow(raio,2);
        printf("a area do quadrado inscrito no circulo:%.2f\n",areaQ);
    }else{
        printf("indique a medida do lado de um quadrado\n");
        scanf("%f",&lQ);
        areaCC = (pi*pow(lQ,2))/4;
        printf("A area da coroa circular formada pelo circulo inscrito e circunscrito a este quadrado:%.2f\n",areaCC);
    }


  return 0;
}

questao 17
*/
int main(){
    char c;
    float raio,lado,area;
    printf("indique um caractere:\n");
    scanf("%c", &c);
    printf("Indique a medida de um circulo :\n");
    scanf("%d", &raio);
    if (c == 'T' || c == 't'){
        lado = raio*sqrt(3);
        area = ((3*sqrt(3))/4)*pow(raio,2);
        printf ( "A area do triangulo inscrito:%.2f\n ",area);
    }else if(c=='q'||c=='Q'){
        lado =raio*sqrt(2);
        area = 2*pow(raio,2);
        printf ( "A area do quadrado inscrito:%.2f\n ",area);
    }else if(c=='h'||c=='H'){
        area=(3*sqrt(3)/2)*pow(raio,2);
        printf ( "A area do hexagono inscrito:%.2f\n ",area);
    }else{
        printf("Tente novamente");
    }
    return 0;
}














