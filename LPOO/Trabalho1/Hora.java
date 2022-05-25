public class Hora {
    private int hora;
    private int minuto;

    // Construtores
    public Hora(int hora, int minuto) {
        this.hora = hora;
        this.minuto = minuto;
    }
    
    // Exercicio: fazer o construtor Hora()

    // Getters e setters
    public int getHora() { return hora; }
    public void setHora(int hora) { this.hora = hora; }

    public int getMinuto() { return minuto; }
    public void setMinuto(int minuto) { this.minuto = minuto; }
}
