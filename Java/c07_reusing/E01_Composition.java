class InnerClass {
    private int i;

    void set(int n) {
        i = n;
    }

    void display() {
        System.out.println("InnerClass.i = " + i);
    }
}

public class E01_Composition {
    static InnerClass c;
    public static void main(String[] args) {
        c = new InnerClass();
        c.set(13);
        c.display();
    }
}