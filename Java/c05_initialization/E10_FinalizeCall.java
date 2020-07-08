public class E10_FinalizeCall {
    protected void finalize() {
        System.out.println("In finalize method.");
    }

    public static void main(String[] args) {
        new E10_FinalizeCall();
        System.gc();
        System.runFinalization();
    }
}