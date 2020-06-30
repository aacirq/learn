//: 2_object/E07_Incrementable.java

class StaticTest {
    static int i = 22;
}

public class E07_Incrementable {
    static void increment() {
        StaticTest.i++;
    }
    public static void main(String[] args) {
        E07_Incrementable sf = new E07_Incrementable();
        sf.increment();
        System.out.println("StaticTest.i = " + StaticTest.i);
        E07_Incrementable.increment();
        System.out.println("StaticTest.i = " + StaticTest.i);
        increment();
        System.out.println("StaticTest.i = " + StaticTest.i);
    }
}