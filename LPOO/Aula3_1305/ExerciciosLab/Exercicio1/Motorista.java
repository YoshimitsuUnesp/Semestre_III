
public class Motorista {
    private String nome;
    private String cidade;
    private String cnh;
    private int validade;
    private char tipoCarta;
    private boolean tipoPermissao;

    public String getNome(){ return nome; }
    public void setNome(String nome){ this.nome = nome; }

    public String getCidade(){ return cidade; }
    public void setCidade(String cidade){ this.cidade = cidade; }

    public int getValidade(){ return validade; }
    public void setValidade(int validade){ this.validade = validade; }

    public String getCnh(){ return cnh; }
    public void setCnh(String cnh){ this.cnh = cnh; }

    public char getTipoCarta(){ return tipoCarta; }
    public void setTipoCarta(char tipoCarta){ this.tipoCarta = tipoCarta; }

    public boolean getTipoPermissao(){ return tipoPermissao; }
    public void setTipoPermissao(boolean tipoPermissao){ this.tipoPermissao = tipoPermissao; }

    public Motorista(String nome, String cidade, int validade, String cnh, char tipoCarta, boolean tipoPermissao){
        this.nome = nome;
        this.cidade = cidade;
        this.validade = validade;
        this.cnh = cnh;
        this.tipoCarta = tipoCarta;
        this.tipoPermissao = tipoPermissao;
    }
}