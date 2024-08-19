fun main() {
    val operation = Operation()

    println("Menu:")
    println("1. Addition")
    println("2. Subtraction")
    println("3. Multiplication")
    println("4. Division")

    println("Enter your choice:")
    val choice: Int = readln().toInt()

    println("Enter value 1:")
    val num1: Int = readln().toInt()

    println("Enter value 2:")
    val num2: Int = readln().toInt()

    when (choice) {
        1 -> println("$num1 + $num2 = ${operation.addition(num1, num2)}")
        2 -> println("$num1 + $num2 = ${operation.subtraction(num1, num2)}")
        3 -> println("$num1 + $num2 = ${operation.multiplication(num1, num2)}")
        4 -> println("$num1 + $num2 = ${operation.division(num1, num2)}")
    }
}

class Operation {
    fun addition(
        x: Int,
        y: Int,
    ): Int = x + y

    fun subtraction(
        x: Int,
        y: Int,
    ): Int = x - y

    fun multiplication(
        x: Int,
        y: Int,
    ): Int = x * y

    fun division(
        x: Int,
        y: Int,
    ): Int = x / y
}
