public class Onibus extends Veiculo {
    private int qtdAssentos;

    public Onibus(int ano, int qtdPneus, String modelo, String placa, int qtdAssentos) {
        super(ano, qtdPneus, modelo, placa);
        this.qtdAssentos = qtdAssentos;
    }
}
