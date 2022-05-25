public class Onibus {
    private String modelo;
    private Data anoFabricacao;
    private String marca; 
    private int km;
    private int[][] localAssento; // Trabalho pede localAssento como matriz
    
    // Construtores
    public Onibus(String modelo, Data anoFabricacao, String marca, int km, int[][] localAssento) {
        this.modelo = modelo;
        this.anoFabricacao = anoFabricacao;
        this.marca = marca;
        this.km = km;
        this.localAssento = localAssento;
    }

    // Exercicio: fazer o construtor Onibus()

    // Getters e setters
    public String getModelo() { return modelo; }
    public void setModelo(String modelo) { this.modelo = modelo; }

    public Data getAnoFabricacao() { return anoFabricacao; }
    public void setAnoFabricacao(Data anoFabricacao) { this.anoFabricacao = anoFabricacao; }

    public String getMarca() { return marca; }
    public void setMarca(String marca) { this.marca = marca; }

    public int getKm() { return km; }
    public void setKm(int km) { this.km = km; }

    public int[][] getLocalAssento() { return localAssento; }
    public void setLocalAssento(int[][] localAssento) { this.localAssento = localAssento; }
}
