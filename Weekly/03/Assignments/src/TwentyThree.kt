fun main() {
    println("Enter the size of arrays:")
    val size: Int = readln().toInt()

    val array = Array(size) { IntArray(size) }
    val arrayOperation = ArrayOperation(array)

    arrayOperation.getArray()

    arrayOperation.displayArray()
}

class ArrayOperation(
    private val array: Array<IntArray>,
) {
    private val size = array.size

    fun getArray() {
        println("Enter the array values:")
        repeat(size) { i ->
            repeat(size) { j ->
                array[i][j] = readln().toInt()
            }
        }
    }

    fun displayArray() {
        println("Array elements are:")
        println(array.contentDeepToString())
    }
}
