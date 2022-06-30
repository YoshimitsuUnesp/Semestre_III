public class Carro {
    private String marca;
    private String nome;
    private int ano;

    public Carro(String marca, String nome, int ano) {
        this.marca = marca;
        this.nome = nome;
        this.ano = ano;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }
}