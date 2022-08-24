public class TesteVendedor {
    public static void main(String [] args){
        Vendedor v1 = new Vendedor(1500f, 500f, "Pedro", 0);
        v1.calcularSalario();
        v1.imprimirDados();
    }
}
