import java.util.*;
public class ValidacaoSenha{
   static boolean ehFim(String s){
      return (s.length()== 3 && s.charAt(0) =='F'&&s.charAt(1)== 'I' && s.charAt(2)== 'M');// verifica se a string lida é "FIM"
   }
   static boolean validaSenha(String s){
      boolean resp = true;// resultado que sera retornado
      boolean maiuscula =false, minuscula =false, digito= false,especial = false;// presenca de cada grupo de caracteres
      if (s.length() < 8){// tamanho minimo da senha
         resp = false;
      }
      for (int i = 0;i < s.length();i++){// percorre a senha classificando cada caractere
         char c =s.charAt(i);
         if(c >= 'A'&&c <= 'Z'){
            maiuscula = true;
         }else if(c >='a' &&c <='z'){
            minuscula = true;
         }else if(c>= '0'&& c <='9'){
            digito = true;
         }else{
            especial = true;
         }
      }
      if (!(maiuscula && minuscula && digito && especial)){ // exige a presenca de todos os grupos
         resp = false;
      }
      return resp;
   }
   public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      while (sc.hasNextLine()){ 
         String s = sc.nextLine();
         if (ehFim(s)){
            break;
         }
         if (validaSenha(s)){
            System.out.println("SIM");
         } else {
            System.out.println("NAO");
         }
      }
      sc.close();
   }
}