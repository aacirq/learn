class Integral {
    float f;
}

public class E02_Aliasing {
    public static void print(Object obj) {
        System.out.println(obj);
    }
    public static void main(String[] args) {
        Integral f1 = new Integral();
        Integral f2 = new Integral();
        f1.f = 2.2f;
        f2.f = 22.2f;
        print("1: f1.f: " + f1.f + ", f2.f: " + f2.f);
        f1 = f2;
        print("1: f1.f: " + f1.f + ", f2.f: " + f2.f);
        f1.f = 222.222f;
        print("1: f1.f: " + f1.f + ", f2.f: " + f2.f);
    }
}