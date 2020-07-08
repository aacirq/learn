package connection;

public class Connection {
    private static int count = 0;
    private int id = count++;

    Connection() {}

    public String toString() {
        return "Connection " + id;
    }
}