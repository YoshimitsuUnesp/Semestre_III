public class Televisao implements Aparelho{
    private double preco;
    private double imposto;
    private String nome;
    private String descricao;

    public Televisao(double preco, double imposto, String nome, String descricao) {
        this.preco = preco;
        this.imposto = imposto;
        this.nome = nome;
        this.descricao = descricao;
    }

    public String getNome(){
        return nome;
    }

    public double getPreco(){
        return preco;
    }

}
