class Dog {
    Dog() {
        System.out.println("Barking");
    }

    Dog(int i, double d) {
        System.out.println("Barking. int: " + i + ", double: " + d);
    }

    Dog(double d, int i) {
        System.out.println("Barking. double: " + d + ", int: " + i);
    }
}

public class E06_SwappedArgument {
    public static void main(String[] args) {
        new Dog();
        new Dog(1, 1.1);
        new Dog(2.2, 2);
    }
}