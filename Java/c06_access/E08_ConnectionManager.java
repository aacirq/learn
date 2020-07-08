import connection.*;

public class E08_ConnectionManager {
    public static void main(String[] args) {
        Connection c = ConnectionManager.getConnection();
        while (c != null) {
            System.out.println(c);
            c = ConnectionManager.getConnection();
        }
    }
}