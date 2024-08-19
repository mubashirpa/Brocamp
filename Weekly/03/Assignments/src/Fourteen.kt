fun main() {
    println("Enter the size of arrays:")
    val size: Int = readln().toInt()

    val array1 = Array(size) { Array(size) { 0 } }
    println("Enter the values of array 1:")
    repeat(size) { i ->
        repeat(size) { j ->
            array1[i][j] = readln().toInt()
        }
    }

    val array2 = Array(size) { Array(size) { 0 } }
    println("Enter the values of array 2:")
    repeat(size) { i ->
        repeat(size) { j ->
            array2[i][j] = readln().toInt()
        }
    }

    val sum = Array(size) { Array(size) { 0 } }
    repeat(size) { i ->
        repeat(size) { j ->
            sum[i][j] = array1[i][j] + array2[i][j]
        }
    }

    println("Sum of two array is:")
    println(sum.contentDeepToString())
}
