public class E05_BitwistOperators2 {
    static void showBinary(int n) {
        char[] buffer = new char[32];
        int bufferPosition = 32;
        do {
            buffer[--bufferPosition] = ((n & 0x01) == 0) ? '0' : '1';
            n >>>= 1;
        } while (n != 0);
        for (int i = bufferPosition; i < 32; i++) {
            System.out.print(buffer[i]);
        }
    }
    public static void main(String[] args) {
        int i1 = 0xaaaaaaaa;
        int i2 = 0x55555555;
        System.out.print("i1: ");
        showBinary(i1);
        System.out.println(" ");
        System.out.print("i2: ");
        showBinary(i2);
        System.out.println(" ");
        System.out.print("i1 & i2: ");
        showBinary(i1 & i2);
        System.out.println(" ");
        System.out.print("i1 | i2: ");
        showBinary(i1 | i2);
        System.out.println(" ");
        System.out.print("~i1: ");
        showBinary(~i1);
        System.out.println(" ");
        System.out.print("~i2: ");
        showBinary(~i2);
        System.out.println(" ");
        System.out.print("i1 ^ i2: ");
        showBinary(i1 ^ i2);
        System.out.println(" ");
    }
}