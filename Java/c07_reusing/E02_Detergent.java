class Cleanser {
    private String s = "Cleanser";
    public void append(String a) { s += a; }
    public void dilute() { append(" dilute()"); }
    public void apply() { append(" apply()"); }
    public void scrub() { append(" scrub()"); }
    public String toString() { return s; }
    public static void main(String[] args) {
        Cleanser x = new Cleanser();
        x.dilute();
        x.apply();
        x.scrub();
        System.out.println(x);
    }
}

class Detergent extends Cleanser { 
    // Change a method: 
    public void scrub() { 
        append(" Detergent.scrub()"); 
        super.scrub(); // Call base-class version 
    } 
    // Add methods to the interface: 
    public void foam() { append(" foam()"); } 
    // Test the new class: 
    public static void main(String[] args) { 
        Detergent x = new Detergent(); 
        x.dilute(); 
        x.apply(); 
        x.scrub(); 
        x.foam(); 
        System.out.println(x); 
        System.out.println("Testing root base class:"); 
        Cleanser.main(args); 
    }  
}



public class E02_Detergent extends Detergent {
    public void scrub() {
        append(" E02_Detergent.scrub()");
        super.scrub();
    }

    public void sterilize() {
        append(" E02_Detergent.sterilize()");
    }

    public static void main(String[] args) {
        E02_Detergent d = new E02_Detergent();
        d.dilute();
        d.apply();
        d.scrub();
        d.foam();
        d.sterilize();
        System.out.println(d);
        System.out.println("Testing base class.");
        Detergent.main(args);
    }
}