// package shapes;

import java.util.Random;

public class RandomShapeCreator {
    private Random rand = new Random();
    public Shape next() {
        int i = rand.nextInt(3);
        // System.out.println(i);
        switch(i) {
            case 0: return new Circle();
            case 1: return new Square();
            default: return new Triangle();
        }
    }
}