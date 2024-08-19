fun main() {
    // lambdaExpression()

    // withoutParameters()

    // passToAnotherFunction()

    // functionTypes()
}

fun lambdaExpression() {
    // Lambda expression
    val upperCaseString = { value: String -> value.uppercase() }
    println(upperCaseString("hello"))
}

fun withoutParameters() {
    // Lambda expression without parameters
    val helloWorld = { println("Hello World") }
    helloWorld()
}

fun passToAnotherFunction() {
    // Pass to another function
    val isNegative = { x: Int -> x < 0 }
    val numbers = listOf(1, 5, -3, 7, -8)

    val negatives = numbers.filter(isNegative)

    // If a lambda expression is the only function parameter, you can drop the function parentheses
    val positives = numbers.filter { x -> x > 0 }

    println(negatives)
    println(positives)
}

fun functionTypes() {
    // This is what a lambda expression looks like with function type
    val sum: (Int, Int) -> Int = { x, y -> x + y }

    // If your lambda expression has no parameters then the parentheses () are left empty
    // val sum: () -> Int = { 5 + 5 }

    println(sum(5, 10))
}
