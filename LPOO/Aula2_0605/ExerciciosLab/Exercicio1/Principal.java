public class Principal {

    public static void main(String[] args){
        Carro porsche = new Carro();
        porsche.setNome("porsche911");
        porsche.setAcel(120);
        porsche.setCavalos(600);
        porsche.setPeso(2625.65f);
        porsche.setKm(350);

        //--------Parte do exercicio----------//
        Carro fusca = new Carro();
        fusca.setNome("Fuscao");
        fusca.setAcel(60);
        fusca.setCavalos(100);
        fusca.setPeso(3000f);
        fusca.setKm(600);
        fusca.setCategoria("Usado");
        fusca.setModelo("Popular");

        Carro ferrari = new Carro();
        ferrari.setNome("Ferrari Braba");
        ferrari.setAcel(600);
        ferrari.setCavalos(1000);
        ferrari.setPeso(4000.4f);
        ferrari.setKm(0);
        ferrari.setCategoria("Novo");
        ferrari.setModelo("Esporte");

        Carro opala = new Carro();
        fusca.setNome("Opala Bebum");
        fusca.setAcel(110);
        fusca.setCavalos(200);
        fusca.setPeso(200.5f);
        fusca.setKm(50);
        fusca.setCategoria("Usado");
        fusca.setModelo("Antigo");
        //------------------------------------//
    }
}