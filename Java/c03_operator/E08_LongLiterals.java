public class E08_LongLiterals {
    public static void main(String[] args) {
        Long l1 = 0x2fL;
        System.out.println("l1: " + Long.toBinaryString(l1));
        Long l2 = 0X2FL;
        System.out.println("l1: " + Long.toBinaryString(l2));
        Long l3 = 0177L;
        System.out.println("l1: " + Long.toBinaryString(l3));
    }
}