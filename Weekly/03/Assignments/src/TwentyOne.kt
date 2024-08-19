fun main() {
    println("Enter the array limit:")
    val limit: Int = readln().toInt()

    val array = IntArray(limit)
    println("Enter the values of array:")
    repeat(limit) {
        array[it] = readln().toInt()
    }

    val sum = IntArray(limit - 1)
    array.forEachIndexed { index, i ->
        if (index == array.lastIndex) return@forEachIndexed
        sum[index] = i * array[index + 1]
    }
    println(sum.joinToString(", "))
}
