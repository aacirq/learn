public class E10_Vampire {
    public static void main(String[] args) {
        int[] startDigit = new int[4];
        int[] productDigit = new int[4];
        for (int num1 = 10; num1 < 100; num1++) {
            for (int num2 = num1; num2 < 100; num2++) {
                startDigit[0] = num1 / 10;
                startDigit[1] = num1 % 10;
                startDigit[2] = num2 / 10;
                startDigit[3] = num2 % 10;

                int product = num1 * num2;
                if (product < 1000) continue;
                productDigit[0] = product % 10;
                productDigit[1] = (product / 10) % 10;
                productDigit[2] = (product / 100) % 10;
                productDigit[3] = product / 1000;

                int count = 0;
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        if (startDigit[i] == productDigit[j]) {
                            count++;
                            startDigit[i] = -1;
                            productDigit[j] = -1;
                            break;
                        }
                    }
                }
                if (count == 4) {
                    System.out.println(num1 + " * " + num2 + " = " + product);
                }
            }
        }
    }
}