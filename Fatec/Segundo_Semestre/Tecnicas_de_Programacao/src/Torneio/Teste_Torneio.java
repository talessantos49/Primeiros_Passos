package Torneio;

import javax.swing.JOptionPane;

public class Teste_Torneio {
    public static void main (String [] args){
        String nome = JOptionPane.showInputDialog("Digite seu nome: ");
        int idade = Integer.parseInt(JOptionPane.showInputDialog("Digite sua idade: "));

        Torneio t01 = new Torneio(nome,idade);
        t01.ExibirDados();
    }
}
