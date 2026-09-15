import java.util.*;
public class CiframentoCesar{
   static String CifraCesar(String s){
     int t = 3;// cosntante para o deslocamento
     String palavra = ""; // string que vai receber a palavra cifrada                           
     for (int i = 0 ; i < s.length(); i++){ // percorre a palavra e vai somando a constante com a letra da palavra, e concatenando na string palavra
         palavra += (char)(s.charAt(i) + t); // como se trata de um char, eh precisso colocar o (char) para que a soma seja feita com o valor do char e nao com o valor inteiro do char
     }
     return palavra;
   }
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in); 
      String s = sc.nextLine(); // nextLine() para pegar a linha inteira com espacos
      while (!s.equals("FIM")){ // enquanto a palavra digitada nao for FIM, ele vai cifrando e imprimindo a palavra
         System.out.println(CifraCesar(s));
         s = sc.nextLine();
      }
      sc.close();
    }
}