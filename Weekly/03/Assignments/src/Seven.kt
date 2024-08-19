fun main() {
    println("Enter a number:")
    val input: Int = readln().toInt()

    for (i in 1..10) {
        println("$i x $input = ${i * input}")
    }
}
