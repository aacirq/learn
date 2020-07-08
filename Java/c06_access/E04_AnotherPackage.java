import local.E04_ProtectedMethod;

public class E04_AnotherPackage {
    public static void main(String[] args) {
        E04_ProtectedMethod pm = new E04_ProtectedMethod();
        pm.display(); // illegal
    }
}