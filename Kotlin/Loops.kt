fun main() {
    // Example 1: For loop (iterating over a range)
    println("Example 1: For loop (range)")
    for (i in 1..5) { // Inclusive range
        println("Value of i: $i")
    }

    // Example 2: For loop with step
    println("\nExample 2: For loop with step")
    for (i in 1..10 step 2) { // Increment by 2
        println("Value of i: $i")
    }

    // Example 3: For loop (iterating in reverse)
    println("\nExample 3: For loop in reverse")
    for (i in 5 downTo 1) { // Inclusive reverse range
        println("Value of i: $i")
    }

    // Example 4: For loop (iterating through an array)
    println("\nExample 4: For loop (array)")
    val array = arrayOf("Apple", "Banana", "Cherry")
    for (fruit in array) {
        println("Fruit: $fruit")
    }

    // Example 5: For loop (with indices)
    println("\nExample 5: For loop with indices")
    for (index in array.indices) {
        println("Index: $index, Value: ${array[index]}")
    }

    // Example 6: While loop
    println("\nExample 6: While loop")
    var counter = 1
    while (counter <= 3) {
        println("Counter: $counter")
        counter++
    }

    // Example 7: Do-while loop
    println("\nExample 7: Do-while loop")
    var doWhileCounter = 1
    do {
        println("Do-while Counter: $doWhileCounter")
        doWhileCounter++
    } while (doWhileCounter <= 3)

    // Example 8: ForEach loop (functional approach)
    println("\nExample 8: ForEach loop")
    array.forEach { fruit ->
        println("Fruit: $fruit")
    }

    // Example 9: ForEachIndexed loop (functional approach with indices)
    println("\nExample 9: ForEachIndexed loop")
    array.forEachIndexed { index, fruit ->
        println("Index: $index, Fruit: $fruit")
    }
}
