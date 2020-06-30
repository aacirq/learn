//: 02_object/E09_AutoboxingTest.java

public class E09_AutoboxingTest {
    public static void main(String[] args) {
        boolean b = true;
        Boolean B = b;
        System.out.println("Boolean: " + B);
        char c = 'x';
        Character C = c;
        System.out.println("Character: " + C);
        byte by = 2;
        Byte By = by;
        System.out.println("Byte: " + By);
        short s = 22;
        Short S = s;
        System.out.println("Short: " + S);
        int i = 222;
        Integer I = i;
        System.out.println("Integer: " + I);
        long l = 2222;
        Long L = l;
        System.out.println("Long: " + L);
        float f = 22.2f;
        Float F = f;
        System.out.println("Float: " + F);
        double d = 22.22;
        Double D = d;
        System.out.println("Double: " + D);
    }
}