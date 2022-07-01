public abstract class Animal {
    private String cor;
    private String nome;
    private String raca;
    private int expectativaVida;

    public Animal(String cor, String nome, String raca, int expectativaVida) {
        this.cor = cor;
        this.nome = nome;
        this.raca = raca;
        this.expectativaVida = expectativaVida;
    }
    
    public String getCor() {
        return cor;
    }
    public void setCor(String cor) {
        this.cor = cor;
    }
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getRaca() {
        return raca;
    }
    public void setRaca(String raca) {
        this.raca = raca;
    }
    public int getExpectativaVida(){
        return expectativaVida;
    }
    public void setExpectativaVida(int expectativaVida){
        this.expectativaVida = expectativaVida;
    }

    abstract void movimentar();
    abstract void comunicar();
}
