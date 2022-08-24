import java.util.Scanner;

public class ex01 {
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        System.out.println("Digite o numero do mês desejado: ");
        int num = entrada.nextInt();
        switch (num){
            case 1:
                System.out.println("O mês escolhido é Janeiro");
                break;
            case 2:
                System.out.println("O mês escolhido é Fevereiro");
                break;
            case 3:
                System.out.println("O mês escolhido é Março");
                break;
            case 4:
                System.out.println("O mês escolhido é Abril");
                break;
            case 5:
                System.out.println("O mês escolhido é Maio");
                break;
            case 6:
                System.out.println("O mês escolhido é Junho");
                break;
            case 7:
                System.out.println("O mês escolhido é Julho");
                break;
            case 8:
                System.out.println("O mês escolhido é Agosto");
                break;
            case 9:
                System.out.println("O mês escolhido é Setembro");
                break;
            case 10:
                System.out.println("O mês escolhido é Outubro");
                break;
            case 11:
                System.out.println("O mês escolhido é Novembro");
                break;
            case 12:
                System.out.println("O mês escolhido é Dezembro");
                break;
            default:
                System.out.println("ERRO!");
        }
    }
}
