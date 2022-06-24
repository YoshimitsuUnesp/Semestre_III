public class Pessoa {
    protected String nome;
    protected int idade;
    protected char sexo;
    protected int faltas;

    // ----------------------------------------
    // Construtor
    public Pessoa(String nome, int idade, char sexo, int faltas){
        this.nome = nome;
        this.idade = idade;
        this.sexo = sexo;
        this.faltas = faltas;
    }

    // ----------------------------------------
    // Getters e setters
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public char getSexo() {
        return sexo;
    }

    public void setSexo(char sexo) {
        this.sexo = sexo;
    }

    public int getFaltas() {
        return faltas;
    }

    public void setFaltas(int faltas) {
        this.faltas = faltas;
    }
    
    //----------------------------------------
    // Metodos
    public int somaIdadeFaltas(){
        return this.getIdade() + this.getFaltas();
    }
}