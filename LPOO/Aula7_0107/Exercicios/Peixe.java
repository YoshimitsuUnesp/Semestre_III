public class Peixe extends Animal {
    private int numNadadeiras;

    // Construtores
    // -------------------
    public Peixe(String cor, String nome, String raca, int expectativaVida, int numNadadeiras) {
        super(cor, nome, raca, expectativaVida);
        this.numNadadeiras = numNadadeiras;
    }

    // Getters e setters
    // -------------------
    public int getNumNadadeiras() {
        return numNadadeiras;
    }

    public void setNumNadadeiras(int numNadadeiras) {
        this.numNadadeiras = numNadadeiras;
    }

    // Metodos
    // -------------------
    @Override
    void movimentar() {
        System.out.println("O peixe nadou 1m");

    }

    @Override
    void comunicar() {
        System.out.println("blub blub blub");

    }
}
