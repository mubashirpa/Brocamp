fun main() {
    println("Enter a string:")
    val input = readln()

    if (input == input.reversed()) {
        println("Entered string is a palindrome")
    } else {
        println("Entered string is not a palindrome")
    }
}
