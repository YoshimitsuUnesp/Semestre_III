import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class Colecoes2 {
    public static void main(String[] args) {
        List<String> nomes = new ArrayList<>();
        nomes.add("Matheus");
        nomes.add("Abaco");
        nomes.add("Roberto");
        Integer[] numerosArray = { 9, 3, 2 };
        List<Integer> numeros = Arrays.asList(numerosArray);
        Collections.sort(nomes, Collections.reverseOrder());
        Collections.sort(numeros);
        System.out.println(nomes);
        System.out.println(numeros);
        Collections.sort(nomes);

        // Lista pessoas
        System.out.println("\nLISTA PESSOAS");
        List<Pessoa> pessoas = new ArrayList<>();
        Pessoa joao = new Pessoa("Joao", 23, 9523.23);
        Pessoa maria = new Pessoa("Maria", 28, 4523.12);
        Pessoa bruxa = new Pessoa("Bruxa", 31, 5234.13);
        pessoas.add(joao);
        pessoas.add(maria);
        pessoas.add(bruxa);
        for (Pessoa p : pessoas)
            System.out.println(p.getNome() + " " + p.getIdade() + " " + p.getSalario() + " ");

        // Sort
        Collections.sort(pessoas, Collections.reverseOrder());
        System.out.println("\nORDENACAO POR SALARIO: ");
        for (Pessoa p : pessoas)
            System.out.println(p.getNome() + " " + p.getIdade() + " " + p.getSalario() + " ");

        // Shuffle
        Collections.shuffle(pessoas);
        System.out.println("\nSHUFFLE");
        for (Pessoa p : pessoas)
            System.out.println(p.getNome() + " " + p.getIdade() + " " + p.getSalario() + " ");

        // Reverse
        Collections.reverse(pessoas);
        System.out.println("\nREVERSE");
        for (Pessoa p : pessoas)
            System.out.println(p.getNome() + " " + p.getIdade() + " " + p.getSalario() + " ");

        // Set
        System.out.println("\nSET");
        Set<String> racas = new HashSet<>();
        racas.add("Poodle");
        racas.add("Pitbull");
        racas.add("Basset");
        racas.add("Basset");
        for (String raca : racas)
            System.out.println(raca);
        if (racas.contains("Yorkshire"))
            System.out.println("Possui");
        else
            System.out.println("Nao possui");

        // Iterator
        System.out.println("\nITERATOR");
        System.out.println("Pessoas");
        Iterator<Pessoa> itPessoa = pessoas.iterator();
        while (itPessoa.hasNext()) {
            Pessoa p = itPessoa.next();
            System.out.println(p.getNome() + " " + p.getIdade() + " " + p.getSalario() + " ");
        }

        // Maps
        Carro corsa = new Carro("ADC-0123", "Corsa", 2002);
        Carro caramo = new Carro("OZQ-0783", "Caramo", 2018);
        Map<String, Carro> carros = new HashMap<>();
        carros.put("UTQ-2380", corsa);
        carros.put("OPC-9023", caramo);

        Carro pesquisa = carros.get("OPC-9023");
        System.out.println(pesquisa.getNome() + " " + pesquisa.getPlaca() + " " + pesquisa.getAno());
    }
}