fun main() {
    val myClass = MyClass()
    myClass.main()
}

class MyClass : Area() {
    fun main() {
        println("Enter your choice:")
        println("1. Circle")
        println("2. Square")
        println("3. Rectangle")
        println("4. Triangle")

        val choice = readln().toInt()
        when (choice) {
            1 -> circle()
            2 -> square()
            3 -> rectangle()
            4 -> triangle()
        }
    }

    private fun circle() {
        println("Enter the radius of the circle:")
        val radius = readln().toDouble()
        val area = String.format("%.2f", circle(radius))
        println("The area of the circle is: $area")
    }

    private fun square() {
        println("Enter the side of the square:")
        val side = readln().toDouble()
        val area = String.format("%.2f", square(side))
        println("The area of the square is: $area")
    }

    private fun rectangle() {
        println("Enter the length of the rectangle:")
        val length = readln().toDouble()
        println("Enter the breadth of the rectangle:")
        val breadth = readln().toDouble()
        val area = String.format("%.2f", rectangle(length, breadth))
        println("The area of the rectangle is: $area")
    }

    private fun triangle() {
        println("Enter the base of the triangle:")
        val base = readln().toDouble()
        println("Enter the height of the triangle:")
        val height = readln().toDouble()
        val area = String.format("%.2f", triangle(base, height))
        println("The area of the triangle is: $area")
    }
}

open class Area {
    fun circle(radius: Double): Double = Math.PI * radius * radius

    fun square(side: Double): Double = side * side

    fun rectangle(
        length: Double,
        breadth: Double,
    ): Double = length * breadth

    fun triangle(
        base: Double,
        height: Double,
    ): Double = 0.5 * base * height
}
