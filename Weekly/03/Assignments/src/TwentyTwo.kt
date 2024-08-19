fun main() {
    println("Enter the size of arrays:")
    val size: Int = readln().toInt()

    val array1 = Array(size) { IntArray(size) }
    println("Enter the values of array 1:")
    getArray(array1, size)

    val array2 = Array(size) { IntArray(size) }
    println("Enter the values of array 2:")
    getArray(array2, size)

    val sum = addArray(array1, array2, size)
    displayArray(sum)
}

fun getArray(
    array: Array<IntArray>,
    size: Int,
) {
    repeat(size) { i ->
        repeat(size) { j ->
            array[i][j] = readln().toInt()
        }
    }
}

fun addArray(
    array1: Array<IntArray>,
    array2: Array<IntArray>,
    size: Int,
): Array<IntArray> =
    Array(size) { i ->
        IntArray(size) { j ->
            array1[i][j] + array2[i][j]
        }
    }

fun displayArray(array: Array<IntArray>) {
    println("Sum of array 1 and array 2:")
    println(array.contentDeepToString())
}
