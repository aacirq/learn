public class E02_StringInitialization {
    String str1 = "Initial at definition";
    String str2;
    E02_StringInitialization(String s) {
        str2 = s;
    }
    public static void main(String[] args) {
        E02_StringInitialization sIni = new E02_StringInitialization("Initial at construction");
        System.out.println("str1: " + sIni.str1);
        System.out.println("str2: " + sIni.str2);
    }
}