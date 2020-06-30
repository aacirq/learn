//: 03_operator/URShift.java

public class URShift {
    public static void main(String[] args) {
        byte s = -1;
        System.out.println("Before shifting: " + Integer.toBinaryString(s));
        s >>>= 25;
        System.out.println("After shifting: " + Integer.toBinaryString(s));
    }
}