import java.util.*;

public class E03_RandomInts2 {
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
        while (true) {
            compareRand();
        }
    }
}