class MethodOverloading {
    public static void main(String[] args) {
        Sample sample = new Sample();

        System.out.println(sample.add(5, 5));
        System.out.println(sample.add(5, 5, 10));
        System.out.println(sample.add("Hello", "World"));
    }
}

class Sample {
    int add(int n0, int n1) {
        return n0 + n1;
    }

    int add(int n0, int n1, int n2) {
        return n0 + n1 + n2;
    }

    String add(String n0, String n1) {
        return n0 + " " + n1;
    }
}