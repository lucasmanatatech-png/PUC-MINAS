import java.util.*;
public class AlteracaoAleatoria {
  static String Alteracao(String s, char aleatorio1, char aleatorio2){
    String palavra = ""; // string que vai receber a palavra alterada
    for (int i = 0; i< s.length(); i++){//percorre a palavra e vai comparando a letra da palavra com a letra aleatoria1 se ela for igual substitui pela letra aleatoria2, se nao for igual apenas concatena a letra da palavra na string palavra
        if (s.charAt(i) == aleatorio1){
            palavra += aleatorio2;
        } else {
            palavra += s.charAt(i);
        }
    }
    return palavra;
    
  }  

public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    Random gerador = new Random();
    gerador.setSeed(4);
    while(!s.equals("FIM")) {
        char aleatorio1 = ((char)('a' + (Math.abs(gerador.nextInt()) % 26)));
        char aleatorio2 = ((char)('a' + (Math.abs(gerador.nextInt()) % 26)));
        s = Alteracao(s, aleatorio1, aleatorio2);
        System.out.println(s);
        s = sc.nextLine();
    }
    sc.close();
    }
}