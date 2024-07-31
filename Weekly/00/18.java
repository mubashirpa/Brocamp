import java.util.Scanner;

class Grades {

    public static void main(String[] args) {
        int written, lab, assignments;
        float grade;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the marks scored by students");
        System.out.print("Written test = ");
        written = scanner.nextInt();
        System.out.print("Lab exams = ");
        lab = scanner.nextInt();
        System.out.print("Assignments = ");
        assignments = scanner.nextInt();

        grade = ((float)written * 70 / 100) + ((float)lab * 20 / 100) + ((float)assignments * 10 / 100);

        System.err.println("Grade of the student is " + grade);
        scanner.close();
    }
}