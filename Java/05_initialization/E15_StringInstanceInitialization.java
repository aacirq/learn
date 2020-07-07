

public class E15_StringInstanceInitialization {
    String s1;
    { s1 = "instance initialized"; }

    E15_StringInstanceInitialization() {
        System.out.println(s1);
    }
    public static void main(String[] args) {
        new E15_StringInstanceInitialization();
    }
}