public class E08_ThisMethodCall {
    void first() {
        second();
        this.second();
    }
    
    void second() {
        System.out.println("Second method is called.");
    }

    public static void main(String[] args) {
        E08_ThisMethodCall m = new E08_ThisMethodCall();
        m.first();
    }
}