package connection;

public class ConnectionManager {
    private static Connection[] arr = new Connection[10];
    private static int counter = 0;
    static {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = new Connection();
        }
    }

    public static Connection getConnection() {
        if (counter < arr.length) {
            return arr[counter++];
        } else {
            return null;
        }
    }
}