

public class Main {
    public static void main(String[] args) {
        Telefone ericsson, sony;

        Telefone nokia = new Telefone();
        System.out.println("Modelo: " + nokia.getModelo());

        ericsson = new Telefone("Sony Ericsson 43834", 65.87, 64, 3);
        System.out.println("Modelo " + ericsson.getModelo());

        sony = new Telefone("Sony Xperia Play", 98.77);
        System.out.println("Modelo: " + sony.getModelo());

        Telefone tijolao = new Telefone("Nokia tijolao", 1);
        System.out.println("Modelo: " + tijolao.getModelo());

    }
}
