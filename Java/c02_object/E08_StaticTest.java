//: 02_object/E08_StaticTest.java

public class E08_StaticTest {
    static int i = 22;

    public static void main(String[] args) {
        E08_StaticTest st1 = new E08_StaticTest();
        E08_StaticTest st2 = new E08_StaticTest();
        System.out.println("st1.i = " + st1.i + "; st2.i = " + st2.i);
        st1.i++;
        System.out.println("st1.i = " + st1.i + "; st2.i = " + st2.i);
    } 
}