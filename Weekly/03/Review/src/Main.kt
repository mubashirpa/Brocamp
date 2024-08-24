fun main() {
    val array = arrayOf(23, 45, 78, 24, 15, 23, 48)

    var max = array[0]
    var sMax = array[1]

    for (i in 2..<array.size) {
        if (array[i] > max) {
            sMax = max
            max = array[i]
        } else if (array[i] > sMax) {
            sMax = array[i]
        }
    }

    println(sMax)
}
