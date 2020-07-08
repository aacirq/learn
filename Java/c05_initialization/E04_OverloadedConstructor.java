public class E04_OverloadedConstructor {
    E04_OverloadedConstructor() {
        System.out.println("From default constructor");
    }

    E04_OverloadedConstructor(String s) {
        System.out.println("From overloaded constructor");
        System.out.println(s);
    }

    public static void main(String[] args) {
        new E04_OverloadedConstructor();
        new E04_OverloadedConstructor("input message");
    }
}