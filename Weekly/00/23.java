import java.util.Scanner;

class TwoDArray {

    public static void main(String[] args) {

        int arr[][] = new int[20][20];
        int length = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the size of array");
        length = scanner.nextInt();

        ArrayOperation aOperation = new ArrayOperation(arr, length, scanner);
        aOperation.getArray();
        aOperation.displayArray();

        scanner.close();
    }
}

class ArrayOperation {

    private int arr[][];
    private int length;
    Scanner scanner;

    ArrayOperation(int arr[][], int length, Scanner scanner) {
        this.arr = arr;
        this.length = length;
        this.scanner = scanner;
    }

    void getArray() {
        System.out.println("Enter the array values");
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length; j++) {
                arr[i][j] = scanner.nextInt();
            }
        }
    }

    void displayArray() {
        System.out.println("Array elements are:");
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length; j++) {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println("");
        }
    }
}