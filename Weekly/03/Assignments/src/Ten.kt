fun main() {
    println("Enter the size of arrays:")
    val size: Int = readln().toInt()

    val array1 = IntArray(size)
    println("Enter the values of array 1:")
    for (i in 0..<size) {
        array1[i] = readln().toInt()
    }

    val array2 = IntArray(size)
    println("Enter the values of array 2:")
    for (i in 0..<size) {
        array2[i] = readln().toInt()
    }

    array1.forEachIndexed { index, i ->
        array1[index] = array2[index]
        array2[index] = i
    }

    println("Arrays after swapping:")
    println("Array 1: ${array1.joinToString(", ")}")
    println("Array 2: ${array2.joinToString(", ")}")
}
