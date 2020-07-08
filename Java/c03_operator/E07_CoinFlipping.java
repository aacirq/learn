import java.util.*;

public class E07_CoinFlipping {
    public static void main(String[] args) {
        Random rand = new Random();
        boolean coin = rand.nextBoolean();
        System.out.println("OUTCOME:" + (coin ? "HEAD" : "TAIL"));
    }
}