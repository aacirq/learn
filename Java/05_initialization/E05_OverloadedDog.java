class Dog {
    Dog() {
        System.out.println("Barking");
    }

    Dog(int i) {
        System.out.println("Barking with int: " + i);
    }
    
    Dog(double d) {
        System.out.println("Barking with double: " + d);
    }
}

public class E05_OverloadedDog {
    public static void main(String[] args) {
        new Dog();
        new Dog(1);
        new Dog(1.2);
    }
}