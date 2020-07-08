public class E17_ObjectReference {
    E17_ObjectReference(String s) {
        System.out.println(s);
    }

    public static void main(String[] args) {
        E17_ObjectReference[] arr = new E17_ObjectReference[4];
        arr[0] = new E17_ObjectReference("Object No. 0");
        arr[1] = new E17_ObjectReference("Object No. 1");
        arr[2] = new E17_ObjectReference("Object No. 2");
        arr[3] = new E17_ObjectReference("Object No. 3");
    }
}