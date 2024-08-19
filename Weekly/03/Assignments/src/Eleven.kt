fun main() {
    println("Enter the size of an array:")
    val size: Int = readln().toInt()

    val array = IntArray(size)
    println("Enter the values of array:")
    for (i in 0..<size) {
        array[i] = readln().toInt()
    }

    val evenCount = array.count { it % 2 == 0 }
    println("Number of even numbers in the given array is $evenCount")
}
