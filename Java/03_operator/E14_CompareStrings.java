public class E14_CompareStrings {
    static void compare(String s1, String s2) {
        System.out.println(s1 + " == " + s2 + ": " + (s1 == s2));
        System.out.println(s1 + " != " + s2 + ": " + (s1 != s2));
        System.out.println(s1 + ".equals(" + s2 + "): " + (s1.equals(s2)));
    }
    public static void main(String[] args) {
        String s1 = new String("abc");
        String s2 = "abc";
        compare(s1, s2);
        compare("abc", s1);
        compare("123", "abc");
        compare("abc", "abcd");
    }
}