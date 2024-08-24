fun main() {
    val point1 = Point(5, 10)
    val point2 = Point(10, 15)

    println(point1 + point2)
    println(point1.plus(point2))
}

operator fun Point.plus(other: Point) = Point(x + other.x, y + other.y)

data class Point(
    val x: Int,
    val y: Int,
)
