import java.util.Scanner;

public class ex03 {
    public static void main(String[] args){
        Scanner entrada1 = new Scanner(System.in);
        System.out.println("A velocidade maxima da via é: ");
        int velMax = entrada1.nextInt();
        Scanner entrada = new Scanner(System.in);
        System.out.println("Entre com a velocidade do carro: ");
        int velCarro = entrada.nextInt();
        if (velCarro <= velMax)
            System.out.println("Você está dentro do limite de velocidade");
        else if ((velCarro > velMax) && (velCarro <= velMax+10))
            System.out.println("Você ultrapassou o limite de velocidade, sua multa é de 50 Reais!");
        else if ((velCarro >= (velMax+11)) && (velCarro <= (velMax+30)))
            System.out.println("Você ultrapassou o limite de velocidade, sua multa é de 100 reais!");
        else
            System.out.println("Você ultrapassou o limite de velocidade, sua multa é de 300 reais!");
    }
}
