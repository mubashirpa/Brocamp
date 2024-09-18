fun main() {
    val array = getArray()
    println(array.reversed())
}

fun getArray(): IntArray {
    println("Enter the size of the array:")
    val size = readln().toInt()

    println("Enter the elements:")
    return IntArray(size) {
        readln().toInt()
    }
}
