//: 2_object/E11_AllTheColorsOfTheRainbow.java

public class E11_AllTheColorsOfTheRainbow {
    int anIntegerRepresentingColors;

    void changeTheHueOfTheColor(int newHue) {
        anIntegerRepresentingColors = newHue;
    }

    public static void main(String[] args) {
        E11_AllTheColorsOfTheRainbow color = new E11_AllTheColorsOfTheRainbow();
        color.changeTheHueOfTheColor(22);
    }
}