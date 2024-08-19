import kotlin.math.sqrt

fun main() {
    println("Enter a number:")
    val num: Int = readln().toInt()

    if (isPrime(num)) {
        println("Entered number is a prime number")
    } else {
        println("Entered number is not a prime number")
    }
}

fun isPrime(num: Int): Boolean {
    // Condition for non-prime number
    for (i in 2..sqrt(num.toDouble()).toInt()) {
        if (num % i == 0) {
            return false
        }
    }

    return true
}
