import java.util.*;
public class InversaoStringRec {
   static boolean ehFim(String s){
      return (s.length() == 3&&s.charAt(0)=='F' && s.charAt(1) =='I' &&s.charAt(2)== 'M');// verifica se a string lida eh FIM
   }
   static String inversaoRec(String s, int i){
      String resp;
      if (i>=s.length()){// base da recursao percorreu a string inteira
         resp ="";
      }else{//inverte o restante e coloca o caractere atual no final
         resp = inversaoRec(s, i +1)+s.charAt(i);
      }
      return resp;
   }
   static String inversao(String s){// metodo que chama o recursivo pela primeira vez inicializando o contador
      return inversaoRec(s, 0);
   }
   public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      while (sc.hasNextLine()){ // le linha por linha ate o fim da entrada
         String s = sc.nextLine();
         if (ehFim(s)){ // encontrou o FIM encerra o programa
            break;
         }
         System.out.println(inversao(s));
      }
      sc.close();
   }
}