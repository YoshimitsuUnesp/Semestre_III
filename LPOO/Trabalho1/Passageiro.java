public class Passageiro {
    private String documentoId; // Deixando documentoId como String por considerar ter 11 digitos
    private String nome;
    private Data dataNasc;
    private String endereco; // Se sobrar tempo, implementar classe Endereco


    //Construtores
    public Passageiro(String documentoId, String nome, Data dataNasc, String endereco) {
        this.documentoId = documentoId;
        this.nome = nome;
        this.dataNasc = dataNasc;
        this.endereco = endereco;
    }

    // Exercicio: fazer o construtor Passageiro()

    // Getters e Setters
    public String getdocumentoId() { return documentoId; }
    public void setdocumentoId(String documentoId) { this.documentoId = documentoId; }

    public String getNome() { return nome; }
    public void setNome(String nome) { this.nome = nome; }

    public Data getDataNasc() { return dataNasc; }
    public void setDataNasc(Data dataNasc) { this.dataNasc = dataNasc; }

    public String getEndereco() { return endereco; }
    public void setEndereco(String endereco) { this.endereco = endereco; }
}