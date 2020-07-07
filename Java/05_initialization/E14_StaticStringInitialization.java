public class E14_StaticStringInitialization {
    static String s1 = "Initialized at definition";
    static String s2;
    static { s2 = "Initialized at static method"; }
    public static void main(String[] args) {
        System.out.println(s1);
        System.out.println(s2);
    }
}