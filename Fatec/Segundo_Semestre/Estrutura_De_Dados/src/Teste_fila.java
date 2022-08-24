public class Teste_fila {
    public static void main (String[] args){
        Fila<Integer> fila = new Fila<Integer>();
        fila.enfileira(1);
        fila.enfileira(2);
        fila.enfileira(3);
        // vamos verificar se a fila está vazia, nesse caso será false;
        System.out.println("A fila está vazia? " +fila.estaVazia());

        // Vamos verificar o tamanho da minha fila após enfileirar
        System.out.println("Qual o tamanho da fila: "+ fila.tamanho());

        //Vamos visualizar os elementos dentro da fila
        System.out.println(fila.toString());
    }
}
