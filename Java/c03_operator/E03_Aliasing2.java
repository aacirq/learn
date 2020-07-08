public class E03_Aliasing2 {
    static void fun(Integral x) {
        x.f = 1.0f;
    }
    public static void main(String[] args) {
        Integral n = new Integral();
        System.out.println("1: n.f: " + n.f);
        fun(n);
        System.out.println("1: n.f: " + n.f);
    }
}