fun main() {
    println("Enter the size of an array:")
    val size: Int = readln().toInt()

    val array = IntArray(size)
    getArray(array, size)
    displayArray(array)
}

fun getArray(
    array: IntArray,
    size: Int,
) {
    println("Enter the values of array:")
    repeat(size) { i ->
        array[i] = readln().toInt()
    }
}

fun displayArray(array: IntArray) {
    println("The given array is:")
    println(array.joinToString(", "))
}
