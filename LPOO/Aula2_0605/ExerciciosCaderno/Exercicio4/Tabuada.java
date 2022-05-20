

import java.util.Scanner;

public class Tabuada{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        float num;
        System.out.println("Digite um numero:");
        num = sc.nextFloat();

        for(int i = 1; i <= 100; i++)
            if (num*i <= 100)
                System.out.println(num*i);
    }
}