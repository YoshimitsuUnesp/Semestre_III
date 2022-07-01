public class Carro extends Veiculo {
    private String proprietario;
    private int ultimaRevisao;

    public Carro(int ano, int qtdPneus, String modelo, String placa, String proprietario, int ultimaRevisao) {
        super(ano, qtdPneus, modelo, placa);
        this.proprietario = proprietario;
        this.ultimaRevisao = ultimaRevisao;
    }

    public String getProprietario() {
        return proprietario;
    }
    public void setProprietario(String proprietario) {
        this.proprietario = proprietario;
    }
    public int getUltimaRevisao() {
        return ultimaRevisao;
    }
    public void setUltimaRevisao(int ultimaRevisao) {
        this.ultimaRevisao = ultimaRevisao;
    }
}
