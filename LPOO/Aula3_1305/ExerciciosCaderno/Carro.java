
public class Carro {
    private String nome;
    private String modelo;
    private String categoria;
    private int potencia;
    private int ano;
    
    public void cadastraCarro(String nome, String modelo, String categoria, int potencia, int ano){
        this.nome = nome;
        this.modelo = modelo;
        this.categoria = categoria;
        this.potencia = potencia;
        this.ano = ano;
        
        System.out.println("Carro cadastrado com sucesso!");
    }

}