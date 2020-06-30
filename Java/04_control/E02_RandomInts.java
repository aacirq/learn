import java.util.*;

public class E02_RandomInts {
    static Random rand = new Random(47);
    public static void compareRand() {
        int a = rand.nextInt();
        int b = rand.nextInt();
        System.out.println("a = " + a + ", b = " + b);
        if (a > b) {
            System.out.println("a > b");
        } else if (a < b) {
            System.out.println("a < b");
        } else {
            System.out.println("a = b");
        }
    }
    public static void main(String[] args) {
        for (int i = 0; i < 25; i++) {
            compareRand();
        }
    }
}