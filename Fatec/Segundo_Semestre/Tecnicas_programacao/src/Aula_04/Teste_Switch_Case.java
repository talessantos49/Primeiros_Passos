import java.util.Scanner;

public class Teste_Switch_Case {
    public static void main(String[] args){
        Scanner entrada = new Scanner (System.in);
        System.out.println("Entre com o numero entre 1 e 4: ");
        int num = entrada.nextInt();
        switch (num){
            case 1:
                System.out.println("Você escolheu 1");
                break;
            case 2:
                System.out.println("Você escolheu 2");
                break;
            case 3:
                System.out.println("Você escolheu 3");
                break;
            case 4:
                System.out.println("Você escolheu 4");
                break;
            default:
                System.out.println("Número Invalido");
        }
    }
}
