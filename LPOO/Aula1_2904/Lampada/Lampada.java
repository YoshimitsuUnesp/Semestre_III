public class Lampada{

    private boolean estadoLampada;

    void liga(){
        estadoLampada = true;
    }

    void desliga(){
        estadoLampada = false;
    }

    void observa(){
        if(estadoLampada == true)
        System.out.println("A lampada foi ligada");
        else if(estadoLampada == false)
        System.out.println("A lampada foi desligada");
    }

    public static void main(String args[]){
        Lampada lamp1 = new Lampada();
        Lampada lamp2 = new Lampada();

        lamp1.liga();
        lamp1.observa();
        lamp2.desliga();
        lamp2.observa();
    }
}