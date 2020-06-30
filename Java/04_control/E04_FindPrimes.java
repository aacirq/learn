public class E04_FindPrimes {
    public static void main(String[] args) {
        int max = 100;
        if (args.length != 0) {
            max = Integer.parseInt(args[0]);
        }
        for (int i = 1; i <= max; i++) {
            boolean isPrime = true;
            int limit = (int)Math.sqrt((double)i);
            for (int j = 2; j <= limit; j++) {
                if ((i % j) == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                System.out.print(i + " ");
            }
        }
    }
}