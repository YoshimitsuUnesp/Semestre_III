package RevisaoProva;

class Rectangle {
    // Programa feito com o intuito de usar getters e setters
    private float length;
    private float width;

    // -------------------------------------------
    // Construtores
    public Rectangle(float length, float width) {
        this.length = length;
        this.width = width;
    }

    public Rectangle() {
        this(1, 1);
    }

    // -------------------------------------------
    // Getters e setters
    public float getWidth() {
        return width;
    }

    public void setWidth(float width) {
        if (width > 0 && width < 20)
            this.width = width;
        else
            System.out.println("Valor invalido!\nValores permitidos: 0 < width < 20");
    }

    public float getLength() {
        return length;
    }

    public void setLength(float length) {
        if (length > 0 && length < 20)
            this.length = length;
        else
            System.out.println("Valor invalido!\nValores permitidos: 0 < length < 20");
    }

    // -------------------------------------------
    // Metodos
    public void calculaPerimetro(Rectangle retangulo) {
        final float perimetro;
        perimetro = (retangulo.getWidth() * 2) + (retangulo.getLength() * 2);
        System.out.println("Perimetro: " + perimetro);
    }

    public void calculaArea(Rectangle retangulo) {
        final float area;
        area = (retangulo.getWidth() * retangulo.getLength());
        System.out.println("Area: " + area);
    }
}