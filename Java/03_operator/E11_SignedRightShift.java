public class E11_SignedRightShift {
    public static void main(String[] args) {
        int i = 0x80000000;
        for (int j = 0; j < 32; j++) {
            System.out.println(Integer.toBinaryString(i >> j));
        }
    }
}