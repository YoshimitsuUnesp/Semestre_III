public class Rotas {
    private String origem;
    private String parada;
    private String destino;
    private Hora horaSaida;
    private Hora horaChegada;

    // Construtores
    public Rotas(String origem, String parada, String destino, Hora horaSaida, Hora horaChegada) {
        this.origem = origem;
        this.parada = parada;
        this.destino = destino;
        this.horaSaida = horaSaida;
        this.horaChegada = horaChegada;
    }

    // Exercicio: fazer o construtor Rotas()

    // Getters e setters
    public String getOrigem() { return origem; }
    public void setOrigem(String origem) { this.origem = origem; }

    public String getParada() { return parada; }
    public void setParada(String parada) { this.parada = parada; }

    public String getDestino() { return destino; }
    public void setDestino(String destino) { this.destino = destino; }

    public Hora getHoraSaida() { return horaSaida; }
    public void setHoraSaida(Hora horaSaida) { this.horaSaida = horaSaida; }

    public Hora getHoraChegada() { return horaChegada; }
    public void setHoraChegada(Hora horaChegada) { this.horaChegada = horaChegada; }
}
