import javax.swing.JOptionPane;

public class Boletim {
    double n1;
    double n2;
    double media;
    //Construtor
    public Boletim(double n1, double n2){
        this.n1 = n1;
        this.n2 = n2;
    }
    //metodos
    void imprimeBoletim(){
        calculaMedia();
        JOptionPane.showMessageDialog(null, "Dados do Boletim: "+
                "\nNota1: "+ n1+
                "\nNota2: "+ n2+
                "\nMedia: "+ media +
                "\nConceito: "+verificaConceito());
    }
    void calculaMedia(){
        media = (n1+n2)/2;
    }
    String verificaConceito(){
        String conceito ="";
        if(media>=8 && media<=10)
            conceito = "A";
        else if (media>=6)
            conceito = "B";
        else if (media>=4)
            conceito = "C";
        else
            conceito = "D";
        return conceito;
    }
}
