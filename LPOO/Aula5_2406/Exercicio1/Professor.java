public class Professor extends Funcionario {
    private int aulasDadas;

    // ----------------------------------------
    // Construtor
    public Professor(String nome, int idade, char sexo, int faltas, double salario, int aulasDadas) {
        super(nome, idade, sexo, faltas, salario);
        this.aulasDadas = aulasDadas;
    }

    // ----------------------------------------
    // Getters e setters
    public int getAulasDadas() {
        return aulasDadas;
    }

    public void setAulasDadas(int aulasDadas) {
        this.aulasDadas = aulasDadas;
    }
    
    // ----------------------------------------
    // Metodos
    public int somaInts(){
        return this.idade + this.faltas + this.aulasDadas;
    }
}
