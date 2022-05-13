public class Cachorro{
    private int numPatas, tamanho;
    private String corPelagem, Raca;

    void correr()
    {
        System.out.println("O cachorro esta correndo...");
    }

    void comer()
    { 
        System.out.println("O cachorro esta comendo...");
    }

    void latir()
    {        
        System.out.println("O cachorro esta miando...");
    }

    public static void main(String args[])
        {
    Cachorro auau = new Cachorro();
    auau.latir();
    }
}
