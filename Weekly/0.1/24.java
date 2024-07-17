import java.util.Scanner;

class MyClass extends Area {

    public static void main(String[] args) {

        MyClass myClass = new MyClass();
        Scanner scanner = new Scanner(System.in);
        int choice;

        System.out.println("Enter your choice");
        System.out.println("1. Circle");
        System.out.println("2. Square");
        System.out.println("3. Rectangle");
        System.out.println("4. Triangle");
        choice = scanner.nextInt();

        switch (choice) {
            case 1:
                myClass.circle();
                break;
            case 2:
                myClass.square();
                break;
            case 3:
                myClass.rectangle();
                break;
            case 4:
                myClass.triangle();
                break;
            default:
                break;
        }

        scanner.close();
    }

    void circle() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the radius of the circle: ");
        double radius = scanner.nextDouble();
        scanner.close();
        super.circle(radius);
    }

    void square() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the side length of the square: ");
        double side = scanner.nextDouble();
        scanner.close();
        super.square(side);
    }

    void rectangle() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the length of the rectangle: ");
        double length = scanner.nextDouble();
        System.out.print("Enter the width of the rectangle: ");
        double width = scanner.nextDouble();
        scanner.close();
        super.rectangle(length, width);
    }

    void triangle() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the base length of the triangle: ");
        double base = scanner.nextDouble();
        System.out.print("Enter the height of the triangle: ");
        double height = scanner.nextDouble();
        scanner.close();
        super.triangle(base, height);
    }
}

class Area {

    void circle(double radius) {
        double area = Math.PI * radius * radius;
        System.out.println("Area of circle is: " + area);
    }

    void square(double side) {
        double area = side * side;
        System.out.println("Area of square is: " + area);
    }

    void rectangle(double length, double width) {
        double area = length * width;
        System.out.println("Area of rectangle is: " + area);
    }

    void triangle(double base, double height) {
        double area = 0.5 * base * height;
        System.out.println("Area of triangle is: " + area);
    }
}