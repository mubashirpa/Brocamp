fun main() {
    println("Enter the principal amount:")
    val p: Int = readln().toInt()

    println("Enter the interest rate:")
    val r: Float = readln().toFloat()

    println("Enter the number of years:")
    val n: Float = readln().toFloat()

    val si = (p * r * n) / 100
    println("The simple interest of amount $p, with $r interest rate, for $n years is $si")
}
