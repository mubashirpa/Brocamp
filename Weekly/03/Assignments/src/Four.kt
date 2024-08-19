fun main() {
    println("Enter the mark:")
    val mark: Int = readln().toInt()

    when {
        (mark < 0) -> println("The mark should be greater than or equal to 0")
        (mark > 100) -> println("The mark should be less than or equal to 100")
        else -> {
            if (mark > 50) {
                println("Passed")
            } else {
                println("Failed")
            }
        }
    }
}
