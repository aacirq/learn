public class E04_Velocity {
    public static void main(String[] args) {
        if (args.length < 2) {
            System.err.println("Usage: java E04_Velocity distant time");
            System.exit(1);
        }
        double distance = Double.parseDouble(args[0]);
        double time = Double.parseDouble(args[1]);
        System.out.print("Velocity = ");
        System.out.print(distance / time);
        System.out.println(" m/s");
    }
}