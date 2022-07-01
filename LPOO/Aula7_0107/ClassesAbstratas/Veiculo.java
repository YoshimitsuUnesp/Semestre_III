public class Veiculo {
    private int ano;
    private int qtdPneus;
    private String modelo;
    private String placa;

    // Construtores
    // --------------------
    public Veiculo(int ano, int qtdPneus, String modelo, String placa) {
        this.ano = ano;
        this.qtdPneus = qtdPneus;
        this.modelo = modelo;
        this.placa = placa;
    }

    // Getters e setters
    // --------------------
    public int getAno() {
        return ano;
    }
    public void setAno(int ano) {
        this.ano = ano;
    }
    public int getQtdPneus() {
        return qtdPneus;
    }
    public void setQtdPneus(int qtdPneus) {
        this.qtdPneus = qtdPneus;
    }
    public String getModelo() {
        return modelo;
    }
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    public String getPlaca() {
        return placa;
    }
    public void setPlaca(String placa) {
        this.placa = placa;
    }
    
}
