import java.util.Scanner;

class Prime {

    public static void main(String[] args) {
        int num;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a number");
        num = scanner.nextInt();
        scanner.close();

        if (isPrime(num)) {
            System.out.println("Entered number is a Prime number");
        } else {
            System.out.println("Entered number is not a Prime number");
        }
    }

    private static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
}