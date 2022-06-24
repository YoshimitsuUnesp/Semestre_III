public class Funcionario extends Pessoa{
    protected double salario;

    // ----------------------------------------
    // Construtor
    public Funcionario(String nome, int idade, char sexo, int faltas, double salario) {
        super(nome, idade, sexo, faltas);
        this.salario = salario;
    }

    // ----------------------------------------
    // Getters e setters
    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }   

    // ----------------------------------------
    // Metodos
    public double alterarSalario(double salario){
        this.setSalario(salario);
        return salario;
    }
}
