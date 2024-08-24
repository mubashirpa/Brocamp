fun main() {
    val point = Point(5, 10)
    println(point sum 5)
    println(point.sum(5))
}

infix fun Point.sum(other: Int) = Point(x + other, y + other)
