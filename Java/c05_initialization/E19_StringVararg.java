public class E19_StringVararg {
    void fun(String... sArr) {
        for (String s: sArr) {
            System.out.println(s);
        }
    }

    public static void main(String[] args) {
        E19_StringVararg sv = new E19_StringVararg();
        sv.fun("123", "222", "abc", "love: tangtang");
        sv.fun(new String[]{"1234", "2222", "abcd", "love: xiaotangtang"});
    }
}