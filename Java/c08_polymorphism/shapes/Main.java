// package shapes;

public class Main {
    static RandomShapeCreator r = new RandomShapeCreator();
    public static void main(String[] args) {
        Shape[] sArr = new Shape[10];
        for(int i = 0; i < sArr.length; i++) {
            sArr[i] = r.next();
            sArr[i].draw();
            // sArr[i].erase();
        }
        // System.out.println("Hello");
    }
}