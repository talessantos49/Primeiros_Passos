import java.util.Scanner;

public class ex04 {
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        System.out.println("Entre com o primeiro numero: ");
        int num1 = entrada.nextInt();
        Scanner entrada1 = new Scanner(System.in);
        System.out.println("Entre com o segundo numero: ");
        int num2 = entrada.nextInt();
        Scanner entrada2 = new Scanner(System.in);
        System.out.println("Entre com o terceiro numero: ");
        int num3 = entrada.nextInt();
        if ((num1 < num2) && (num2 < num3))
            System.out.println("A ordem dos valores é: "+ num1 + ", " + num2 +
            ", " + num3);
        else if((num2 < num1) && (num1 < num3))
            System.out.println("A ordem dos valores é: "+ num2 + ", "+ num1 +
                    ", "+ num3);
        else if ((num3 < num1) && (num1 < num2))
            System.out.println("A ordem dos valores é: "+ num3 + ", "+ num1 +
                    ", "+ num2);
        else
            System.out.println("A ordem dos valores é: "+num3 + ", "+ num2 +
                    ", "+ num1);
    }
}
