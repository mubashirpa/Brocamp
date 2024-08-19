fun main() {
    println("Enter the size of an array:")
    val size: Int = readln().toInt()

    val array = IntArray(size)
    println("Enter the values of array:")
    for (i in 0..<size) {
        array[i] = readln().toInt()
    }

    array.sortDescending()
    println(array.joinToString(", "))
}
