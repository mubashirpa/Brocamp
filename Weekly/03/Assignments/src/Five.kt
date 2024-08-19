fun main() {
    println("Enter your mark in percentage:")
    val mark: Int = readln().toInt()

    when {
        (mark < 0) -> println("The percentage should be greater than or equal to 0")
        (mark > 100) -> println("The percentage should be less than or equal to 100")
        (mark > 90) -> println("Grade: A")
        (mark > 80) -> println("Grade: B")
        (mark > 70) -> println("Grade: C")
        (mark > 60) -> println("Grade: D")
        (mark > 50) -> println("Grade: E")
        else -> println("Failed")
    }
}
