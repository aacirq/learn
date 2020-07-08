//: 03_operator/E01_PrintStatements.java
import java.util.*;

public class E01_PrintStatements {
    public static void print(Object obj) {
        System.out.println(obj);
    }
    public static void main(String[] args) {
        print("Helo, it's: ");
        print(new Date());
    }
}