fun main() {
    println("Enter the input:")
    val input: Int = readln().toInt()

    when (input) {
        1 -> println("Sunday")
        2 -> println("Monday")
        3 -> println("Tuesday")
        4 -> println("Wednesday")
        5 -> println("Thursday")
        6 -> println("Friday")
        7 -> println("Saturday")
        else -> println("Invalid Entry")
    }
}
