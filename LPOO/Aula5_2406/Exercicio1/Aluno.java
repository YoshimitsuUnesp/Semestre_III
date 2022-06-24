public class Aluno extends Pessoa {
    private double media;

    // ----------------------------------------
    // Construtor
    public Aluno(String nome, int idade, char sexo, int faltas, double media) {
        super(nome, idade, sexo, faltas);
        this.media = media;
    }

    // ----------------------------------------
    // Getters e setters
    public double getMedia() {
        return media;
    }

    public void setMedia(double media) {
        this.media = media;
    }

    // ----------------------------------------
    // Metodos
    public double alterarMedia(double media){
        this.setMedia(media);
        return media;
    }
}
