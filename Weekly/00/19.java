import java.util.Scanner;

class IncomeTax {

    public static void main(String[] args) {
        int income;
        float tax = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the annual income");
        income = scanner.nextInt();
        scanner.close();

        if (income <= 250000) {
            tax = 0;
        } else if (income <= 500000) {
            tax = ((float) 5 / 100) * income;
        } else if (income <= 1000000) {
            tax = ((float) 20 / 100) * income;
        } else if (income <= 5000000) {
            tax = ((float) 30 / 100) * income;
        }

        System.out.println("Income tax amount = " + String.format("%.2f", tax));
    }
}