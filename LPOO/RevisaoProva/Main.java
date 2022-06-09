package RevisaoProva;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Programa feito com o intuito de usar getters e setters
        Rectangle retangulo = new Rectangle();
        Scanner sc = new Scanner(System.in);
        
        retangulo.setLength(sc.nextFloat());
        retangulo.setWidth(sc.nextFloat());

        retangulo.calculaArea(retangulo);
        retangulo.calculaPerimetro(retangulo);
    }
}
