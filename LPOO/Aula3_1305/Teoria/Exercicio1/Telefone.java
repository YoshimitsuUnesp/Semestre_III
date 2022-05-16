package Teoria.Exercicio1;

public class Telefone {
    private String modelo;
    private double creditoInicial;
    private int armazenamento;
    private int qtdCameras;

    public Telefone(String modelo, double creditoInicial, int arm, int qtdCams){
        this.modelo = modelo;
        this.creditoInicial = creditoInicial;
        this.armazenamento = arm;
        this.qtdCameras = qtdCams;
    }

    public Telefone(String modelo, double creditoInicial){
        this(modelo, creditoInicial, 0, 0);
    }

    public Telefone(){
        this("", 0.0, 0, 0);
    }

    public String getModelo(){
        return this.modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
}
