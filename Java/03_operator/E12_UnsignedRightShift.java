public class E12_UnsignedRightShift {
    public static void main(String[] args) {
        int i = 0xffffffff;
        i <<= 1;
        for (int j = 0; j < 32; j++) {
            System.out.println(Integer.toBinaryString(i >>> j));
        }
    }
}