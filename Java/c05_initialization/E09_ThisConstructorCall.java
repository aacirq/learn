public class E09_ThisConstructorCall {
    E09_ThisConstructorCall() {
        System.out.println("No argument in constructor.");
    }

    E09_ThisConstructorCall(int i) {
        this();
        System.out.println("Constructor with an int argument.");
    }

    public static void main(String[] args) {
        new E09_ThisConstructorCall();
        new E09_ThisConstructorCall(1);
    }
}