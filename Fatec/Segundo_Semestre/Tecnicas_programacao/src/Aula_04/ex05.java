import java.util.Scanner;
public class ex05 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Entre com o ano que deseja saber se é Bissexto: ");
        int num = entrada.nextInt();
        int num2 = (num % 400);
        int num3 = (num % 4);
        int num4 = (num % 100);
        if ((num2 == 0) || (num3 == 0) && (num4 != 1))
            System.out.println("O ano " + num + " é um ano bissexto.");
        else
            System.out.println("O ano " + num + " não é um ano bissexto.");
    }
}