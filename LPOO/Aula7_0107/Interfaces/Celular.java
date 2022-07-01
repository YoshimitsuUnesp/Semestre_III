public class Celular implements Aparelho, Movel {
    private double preco;
    private String nome;
    private double credito;

    public Celular(double preco, String nome, double credito) {
        this.preco = preco;
        this.nome = nome;
        this.credito = credito;
    }

    // Getters e setters
    // --------------------
    public double getPreco() {
        return preco;
    }
    public void setPreco(double preco) {
        this.preco = preco;
    }
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public double getCredito() {
        return credito;
    }
    public void setCredito(double credito) {
        this.credito = credito;
    }

    public double calculaCredito(){
        return this.credito * 4;
    }

}
