import java.util.Scanner;

class Mathematical {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        Operations operations = new Operations();
        int choice, a, b;

        do {
            System.out.println("Menu:");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("\nEnter value 1: ");
                    a = scanner.nextInt();
                    System.out.print("Enter value 2: ");
                    b = scanner.nextInt();
                    System.out.println("\n" + a + " + " + b + " = " + operations.addition(a, b) + "\n");
                    break;
                case 2:
                    System.out.print("\nEnter value 1: ");
                    a = scanner.nextInt();
                    System.out.print("Enter value 2: ");
                    b = scanner.nextInt();
                    System.out.println("\n" + a + " - " + b + " = " + operations.subtraction(a, b) + "\n");
                    break;
                case 3:
                    System.out.print("\nEnter value 1: ");
                    a = scanner.nextInt();
                    System.out.print("Enter value 2: ");
                    b = scanner.nextInt();
                    System.out.println("\n" + a + " * " + b + " = " + operations.multiplication(a, b) + "\n");
                    break;
                case 4:
                    System.out.print("\nEnter value 1: ");
                    a = scanner.nextInt();
                    System.out.print("Enter value 2: ");
                    b = scanner.nextInt();
                    System.out.println("\n" + a + " / " + b + " = " + operations.division(a, b) + "\n");
                    break;
                case 5:
                    System.out.println("Exiting the program");
                    break;
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 5");
                    break;
            }
        } while (choice != 5);

        scanner.close();
    }
}

class Operations {
    int addition(int a, int b) {
        return a + b;
    }

    int subtraction(int a, int b) {
        return a - b;
    }

    int multiplication(int a, int b) {
        return a * b;
    }

    float division(int a, int b) {
        return a / b;
    }
}