import java.lang.Math;

public class Complex {
    private float parteReal;
    private float parteImaginaria;
    private float i;

    public Complex(float parteReal, float parteImaginaria, float i){
        this.parteReal = parteReal;
        this.parteImaginaria = parteImaginaria;
        this.i = i;
    }

    public Complex(){
        this(0, 0, (float) Math.sqrt(-1));
    }
}
