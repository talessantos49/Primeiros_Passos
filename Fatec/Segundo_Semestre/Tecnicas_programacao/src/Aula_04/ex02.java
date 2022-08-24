import java.util.Scanner;

public class ex02 {
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        System.out.println("Entre com o primeiro numero: ");
        float num1 = entrada.nextFloat();
        Scanner entrada2 = new Scanner(System.in);
        System.out.println("Entre com o segundo numero: ");
        float num2 = entrada.nextFloat();
        Scanner entrada3 = new Scanner(System.in);
        System.out.println("Entre com o terceiro número: ");
        float num3 = entrada.nextFloat();
        if (num1> (num2+num3))
            System.out.println("A soma dos dois ultimos números é menor que o primeiro. ");
        else
            System.out.println("A soma dos dois ultimos números é maior que o primeiro. ");
    }
}
