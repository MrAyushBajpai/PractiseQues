fun main() {
    // Using varargs in a function
    displayNames("Alice", "Bob", "Charlie")

    // Passing an array with the spread operator
    val moreNames = arrayOf("David", "Eve", "Frank")
    displayNames(*moreNames)

    // Combining direct arguments and spread operator
    displayNames("Grace", *moreNames, "Hank")

    // Using a list as an alternative
    val numbers = listOf(1, 2, 3, 4, 5)
    printSum(numbers)
}

// Function with varargs
fun displayNames(vararg names: String) {
    println("Names:")
    for (name in names) {
        println(name)
    }
}

// Function taking a list as an alternative
fun printSum(numbers: List<Int>) {
    val sum = numbers.sum()
    println("Sum of numbers: $sum")
}
