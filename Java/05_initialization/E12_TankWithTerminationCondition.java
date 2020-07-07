class Tank {
    static int count;
    int id;
    boolean full;

    Tank() {
        id = count;
        count++;
        full = true;
        System.out.println("Tank " + id + " is created.");
    }

    void empty() { full = false; };

    // public String toString() { return "Tank " + id; }

    protected void finalize() {
        if (full) {
            System.out.println("Tank " + id + " should be emptied.");
        } else {
            System.out.println("Tank " + id + " is emptied.");
        }
    }
}

public class E12_TankWithTerminationCondition {

    public static void main(String[] args) {
        new Tank().empty();
        new Tank();
        System.gc();
        System.runFinalization();
    }
}