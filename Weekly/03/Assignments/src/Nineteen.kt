fun main() {
    println("Enter the annual income:")
    val income: Int = readln().toInt()

    val tax = tax(income)
    println("Income tax amount = $tax")
}

fun tax(income: Int): Float =
    when {
        income > 1000000 -> (30 / 100f) * income
        income > 500000 -> (20 / 100f) * income
        income > 250000 -> (5 / 100f) * income
        else -> income.toFloat()
    }
