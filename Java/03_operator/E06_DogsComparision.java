class Dog {
    String name;
    String says;
}

public class E06_DogsComparision {
    public static void main(String[] args){
        Dog d1 = new Dog();
        d1.name = "spot";
        d1.says = "Ruff!";

        Dog d2 = new Dog();
        d2.name = "scruffy";
        d2.says = "Wurf!";

        Dog d3 = d1;
        System.out.println("d1 == d2: " + (d1 == d2));
        System.out.println("d1.equals(d2): " + (d1.equals(d2)));
        
        System.out.println("d1 == d3: " + (d1 == d3));
        System.out.println("d1.equals(d3): " + (d1.equals(d3)));
        
        System.out.println("d2 == d3: " + (d2 == d3));
        System.out.println("d2.equals(d3): " + (d2.equals(d3)));
    }
}