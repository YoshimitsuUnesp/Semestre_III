
import java.util.Scanner;

public class Boletim {
    public static void main(String[] args) {
     int i = 0, maiorOito = 0, cincoOito = 0, menorCinco = 0;
     float nota, media = 0;   
     Scanner sc = new Scanner (System.in);
     do {
        System.out.println("Digite a nota " + i + ":");
        nota = sc.nextFloat();
        if (nota > 8)
        maiorOito += 1;
        else if (nota >= 5 && nota <=8)
        cincoOito += 1;
        else if (nota < 5)
        menorCinco += 1;
        media += nota;
        i++;
     } while (i < 10);
     System.out.println("Maiores do que 8: " + maiorOito);
     System.out.println("Entre 5 e 8: " + cincoOito);
     System.out.println("Menores que 5: " + menorCinco);
     System.out.println("Media das notas: " + media/i);
    }
}