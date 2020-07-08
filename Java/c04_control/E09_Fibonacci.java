public class E09_Fibonacci {
    static int fib(int n) {
        if (n <= 2)
            return 1;
        else
            return fib(n - 1) + fib(n - 2);
    }
    public static void main(String[] args) {
        int limit = Integer.parseInt(args[0]);
        for (int i = 1; i <= limit; i++) {
            System.out.print(fib(i) + ", ");
        }
        // int value1 = 1;
        // int value2 = 1;
        // System.out.print("1");
        // while (value2 <= limit) {
        //     System.out.print(", " + value2);
        //     int tmp = value1 + value2;
        //     value1 = value2;
        //     value2 = tmp;
        // }
        System.out.println("");
    }
}