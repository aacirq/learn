enum PaperCurrency {
    ONE, TWO, FIVE, TEN, TWELVE, FIFTY
}

public class E21_PaperCurrency {
    public static void main(String[] args) {
        for (PaperCurrency p: PaperCurrency.values()) {
            System.out.println(p + ": " + p.ordinal());
        }
    }
}