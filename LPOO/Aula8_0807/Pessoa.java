public class Pessoa implements Comparable<Pessoa> {
    private String nome;
    private int idade;
    private double salario;

    // Construtores
    // --------------------
    public Pessoa(String nome, int idade, double salario) {
        this.nome = nome;
        this.idade = idade;
        this.salario = salario;
    }

    // Getters
    // --------------------
    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }

    public double getSalario() {
        return salario;
    }

    @Override
    public int compareTo(Pessoa outraPessoa) {
        if (this.salario < outraPessoa.salario)
            return -1;
        if (this.salario > outraPessoa.salario)
            return 1;
            
        return 0;
    }

}
