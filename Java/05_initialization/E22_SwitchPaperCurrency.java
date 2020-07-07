enum PaperCurrency {
    ONE, TWO, FIVE, TEN, TWELVE, FIFTY
}

public class E22_SwitchPaperCurrency {
    static void describe(PaperCurrency p) {
        switch(p) {
            case ONE: System.out.println("Momey One"); break;
            case TWO: System.out.println("Momey Two"); break;
            case FIVE: System.out.println("Momey Five"); break;
            case TEN: System.out.println("Momey Ten"); break;
            case TWELVE: System.out.println("Momey Twelve"); break;
            case FIFTY: System.out.println("Momey Fifty"); break;
            default: System.out.println("Not avaliable"); break;
        }
    }
    public static void main(String[] args) {
        for (PaperCurrency p: PaperCurrency.values()) {
            describe(p);
        }
    }
}