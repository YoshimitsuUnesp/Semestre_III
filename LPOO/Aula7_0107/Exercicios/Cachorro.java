public class Cachorro extends Animal {
    private int numPatas;

    // Construtores
    // -------------------
    public Cachorro(String cor, String nome, String raca, int numPatas, int expectativaVida) {
        super(cor, nome, raca, expectativaVida);
        this.numPatas = numPatas;
    }

    // Getters e setters
    // -------------------
    public int getNumPatas() {
        return numPatas;
    }

    public void setNumPatas(int numPatas) {
        this.numPatas = numPatas;
    }

    // Metodos
    // -------------------
    @Override
    void movimentar() {
        System.out.println("O cachorro andou 5m");

    }

    @Override
    void comunicar() {
        System.out.println("O cachorro latiu");

    }
}
