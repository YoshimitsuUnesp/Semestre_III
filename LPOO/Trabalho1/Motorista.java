public class Motorista {
    private String numCnh;
    private Data dataAdmissao;
    private String nome;

    // Construtor
    public Motorista(String numCnh, Data dataAdmissao, String nome) {
        this.numCnh = numCnh;
        this.dataAdmissao = dataAdmissao;
        this.nome = nome;
    }

    // Getters e setters
    public String getNumCnh() { return numCnh; }
    public void setNumCnh(String numCnh) { this.numCnh = numCnh; }

    public Data getDataAdmissao() { return dataAdmissao; }
    public void setDataAdmissao(Data dataAdmissao) { this.dataAdmissao = dataAdmissao; }

    public String getNome() { return nome; }
    public void setNome(String nome) { this.nome = nome; }

}
