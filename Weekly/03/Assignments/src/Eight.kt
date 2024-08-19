fun main() {
    println("Enter a limit:")
    val limit: Int = readln().toInt()

    var sum = 0
    (1..limit step 2).forEach { sum += it }

    println("Sum of odd numbers: $sum")
}
