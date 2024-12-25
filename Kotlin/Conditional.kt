fun main() {
    val number = 10
    val day = 3
    val char = 'A'

    // Example 1: if statement
    if (number > 5) {
        println("Example 1: The number is greater than 5")
    }

    // Example 2: if-else statement
    if (number < 5) {
        println("Example 2: The number is less than 5")
    } else {
        println("Example 2: The number is 5 or greater")
    }

    // Example 3: if-else if ladder
    if (number > 0) {
        println("Example 3: The number is positive")
    } else if (number < 0) {
        println("Example 3: The number is negative")
    } else {
        println("Example 3: The number is zero")
    }

    // Example 4: if as an expression
    val message = if (number % 2 == 0) "Even number" else "Odd number"
    println("Example 4: $message")

    // Example 5: when statement
    when (day) {
        1 -> println("Example 5: Monday")
        2 -> println("Example 5: Tuesday")
        3 -> println("Example 5: Wednesday")
        4 -> println("Example 5: Thursday")
        5 -> println("Example 5: Friday")
        6 -> println("Example 5: Saturday")
        7 -> println("Example 5: Sunday")
        else -> println("Example 5: Invalid day")
    }

    // Example 6: when with multiple conditions
    when (char) {
        'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' -> println("Example 6: Vowel")
        else -> println("Example 6: Consonant")
    }

    // Example 7: when as an expression
    val type = when {
        number < 0 -> "Negative"
        number == 0 -> "Zero"
        else -> "Positive"
    }
    println("Example 7: $type")
}
