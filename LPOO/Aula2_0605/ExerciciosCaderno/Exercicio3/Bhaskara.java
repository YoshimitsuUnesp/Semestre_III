

import java.util.Scanner;

public class Bhaskara{
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            float a, b, c, raiz1, raiz2, delta;
            
            System.out.println("Digite os valores de A, B e C: ");
            a = sc.nextFloat();
            if(a == 0){
                System.out.println("A equacao nao e de segundo grau");
                System.exit(0);
            }
            b = sc.nextFloat();
            c = sc.nextFloat();

            delta = (float) Math.pow(b, 2) - (4 * a * c);

            if(delta < 0){
                System.out.println("Raiz nao pertence ao conjunto dos reais");
                System.exit(0);
            }else if(delta == 0){
                raiz1 = - b / (2 * a);
                System.out.println("Raiz unica: " + raiz1);
            }else{
                raiz1 = (float) ((- b + Math.sqrt(delta)) / (2 * a));
                raiz2 = (float) ((- b - Math.sqrt(delta)) / (2 * a));
                System.out.println("Raiz 1: " + raiz1);
                System.out.println("Raiz 2: " + raiz2);
                System.out.println(delta);
            }
        }
    }
}