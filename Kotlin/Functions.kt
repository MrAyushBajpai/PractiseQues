fun main() {
    // Example 1: Function with no parameters and no return value
    sayHello()

    // Example 2: Function with parameters and a return value
    val sumResult = addNumbers(5, 10)
    println("Example 2: Sum of numbers: $sumResult")

    // Example 3: Function with a default parameter
    greetUser("Alice")
    greetUser() // Uses the default value

    // Example 4: Function with a nullable parameter
    printLength(null)
    printLength("Kotlin")

    // Example 5: Inline single-expression function
    println("Example 5: Square of 4: ${square(4)}")

    // Example 6: Named arguments for better readability
    val area = calculateRectangleArea(length = 5, width = 10)
    println("Example 6: Area of rectangle: $area")

    // Example 7: Higher-order function
    performOperation(5, 10, ::addNumbers) // Passing a function as a parameter

    // Example 8: Lambda function as an argument
    performOperation(5, 10) { a, b -> a * b } // Multiplying numbers using a lambda
}

// Example 1: Function with no parameters and no return value
fun sayHello() {
    println("Example 1: Hello, Kotlin!")
}

// Example 2: Function with parameters and a return value
fun addNumbers(a: Int, b: Int): Int {
    return a + b
}

// Example 3: Function with default parameter values
fun greetUser(name: String = "Guest") {
    println("Example 3: Hello, $name!")
}

// Example 4: Function with nullable parameter and null safety
fun printLength(text: String?) {
    val length = text?.length ?: "Unknown (null input)"
    println("Example 4: Length of text: $length")
}

// Example 5: Inline single-expression function
fun square(number: Int): Int = number * number

// Example 6: Function with named arguments
fun calculateRectangleArea(length: Int, width: Int): Int {
    return length * width
}

// Example 7: Higher-order function (function that accepts another function as a parameter)
fun performOperation(a: Int, b: Int, operation: (Int, Int) -> Int) {
    val result = operation(a, b)
    println("Example 7: Result of operation: $result")
}
