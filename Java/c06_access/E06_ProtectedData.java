class WithProtected {
    protected int i;
}

public class E06_ProtectedData {
    public static void main(String[] args) {
        WithProtected wp = new WithProtected();
        wp.i = 222;
        System.out.println(wp.i);
    }
}