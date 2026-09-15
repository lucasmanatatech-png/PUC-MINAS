import java.util.*;
public class SomaDigitosRec {
   static int paraInteiro(String s){
      int inicio = 0;
      boolean negativo = false;
      if (s.length()> 0 &&s.charAt(0)== '-'){ //permite sinal de negativo na frente
         negativo = true;
         inicio = 1;
      }
      if (inicio >= s.length()){//linha vazia ou so com o sinal ai eh invalido entao recebe zero
         return 0;
      }
      int numero = 0;
      for (int i = inicio; i < s.length(); i++){//percorre os digitos montando o numero
         char c = s.charAt(i);
         if (c < '0' || c > '9'){ // achou algo que nao eh digito ai eh invalido entao recebe zero
            return 0;
         }
         numero = numero *10+(c -'0');
      }
      if (negativo){
         numero = -numero;
      }
      return numero;
   }
   static int somaDigitos(int n){
      int resp;
      if (n<0){ //usa o valor absoluto bpois os digitos de um negativo sao os mesmos
         n = -n;
      }
      if (n ==0){ //base da recursao nao ha mais digitos para somar
         resp = 0;
      } else {//soma o ultimo digito com a soma dos demais
         resp = (n%10)+somaDigitos(n/ 10);
      }
      return resp;
   }

   public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      while (sc.hasNextLine()){ // le linha por linha ate o fim da entrada
         String s = sc.nextLine();
         if (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M'){//encontrou o FIM encerra o programa
            break;
         }
         int n = paraInteiro(s);
         System.out.println(somaDigitos(n));
      }
      sc.close();
   }
}