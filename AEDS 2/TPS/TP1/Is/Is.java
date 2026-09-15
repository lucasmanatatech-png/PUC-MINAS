import java.util.*;
public class Is{
    static Boolean vogais(String s){
        boolean resultado= true;// true se for vogal false se nao for vogal
        for (int i= 0;i< s.length();i++){
            if (!(s.charAt(i) == 'a'|| s.charAt(i)== 'e'|| s.charAt(i) =='i'|| s.charAt(i)== 'o'|| s.charAt(i)== 'u')){// se nao for vogal resultado recebe false
                resultado= false;
            }
        }
        return resultado;
    }
    static Boolean consoantes(String s){
        Boolean resultado = true;
        for (int i = 0;i <s.length();i++){
            if (s.charAt(i) == 'a'||s.charAt(i) == 'e'|| s.charAt(i) =='i'|| s.charAt(i)== 'o'|| s.charAt(i)== 'u'){// se for vogal resultado recebe false
            resultado = false;
            }
            if (!(s.charAt(i)>= 'a' &&s.charAt(i)<= 'z')){
                resultado= false;
            }
        }
        return resultado;
    }
    static Boolean inteiro(String s){
        boolean resultado = true;
        for (int i = 0;i < s.length();i++){
            if (!(s.charAt(i)>='0' && s.charAt(i)<='9')) {// se nao for numero resultado recebe false
                resultado = false;
            }   
        }
        return resultado;
    }
    static boolean real(String s){
        boolean resultado =true;
        int cont =0;
        for (int i = 0;i < s.length();i++){
            if(!(s.charAt(i)>= '0'&& s.charAt(i)<= '9')&& !(s.charAt(i) =='.' ||s.charAt(i)== ',')){// se nao for numero ou ponto ou virgula resultado recebe false
                resultado =false;
            } else if(s.charAt(i)=='.'||s.charAt(i) ==','){ // se for ponto ou virgula
                cont++; // cont recebe +1 por que so pode ter um ponto ou uma virgula
            }
        }
        if (cont>1){
            resultado=false;
        }
        return resultado;
    }
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        String s= sc.nextLine();
        while (!s.equals("FIM")){
            if (vogais(s)){
                System.out.print("SIM ");
            } else {
                System.out.print("NAO ");
            }
            if (consoantes(s)){
                System.out.print("SIM ");
            } else {
                System.out.print("NAO ");
            }
            if (inteiro(s)){
                System.out.print("SIM ");
            } else {
                System.out.print("NAO "); // System.out.print para nao pular linha
            }
            if (real(s)){
                System.out.println("SIM"); // System.out.println para pular linha
            } else {
                System.out.println("NAO");
            }
            s=sc.nextLine(); // ler a proxima linha
        }
        sc.close(); 
    }
}