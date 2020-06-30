//: 02_object/E05_DataOnly2.java

class DataOnly {
    int i;
    double d;
    boolean b;
}

public class E05_DataOnly2 {
    // int i;
    // double d;
    // boolean b;

    public static void main(String[] args) {
        DataOnly data = new DataOnly();
        data.i = 22;
        data.d = 22.22;
        data.b = true;
        System.out.println("d.i = " + data.i);
        System.out.println("d.d = " + data.d);
        System.out.println("d.b = " + data.b);
    }
}