public class Carro {

    public int cavalos;
    public String nome;
    public int aceleration;
    public int km;
    public float peso;
    //--------Parte do exercicio----------//
    public String modelo;
    public int ano;
    public String categoria;

    public void setAno(int ano){
        this.ano = ano;
    }

    public void setCategoria(String categoria){
        this.categoria = categoria;
    }

    public void setModelo(String modelo){
        this.modelo = modelo;
    }
    //-----------------------------------//


    public void setCavalos(int cavalos){
        if (cavalos > 0) {
            this.cavalos = cavalos;
        }
        else{
            System.out.println("Numero inferior a 0!");
        }
    }
    public void setNome(String nome){
        this.nome = nome;
    }
    
    public void setAcel(int aceleration){
        this.aceleration = aceleration;
    }

    public void setKm(int km){
        this.km = km;
    }

    public void setPeso(float peso){
        this.peso = peso;
    }

    // Carro gol = new Carro();
    // gol.setCavalos();
}
