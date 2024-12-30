fun main() {
    // Example 1: Creating an array
    val numbers = arrayOf(10, 20, 30, 40, 50)
    println("Example 1: Array elements: ${numbers.joinToString(", ")}")

    // Example 2: Accessing elements
    println("Example 2: First element: ${numbers[0]}, Last element: ${numbers[numbers.size - 1]}")

    // Example 3: Modifying elements
    numbers[1] = 25
    println("Example 3: Modified array: ${numbers.joinToString(", ")}")

    // Example 4: Iterating through an array using a for loop
    println("Example 4: Iterating through the array using for:")
    for (num in numbers) {
        println(num)
    }

    // Example 5: Iterating using forEach function
    println("Example 5: Iterating through the array using forEach:")
    numbers.forEach { num ->
        println(num)
    }

    // Example 6: Size of the array
    println("Example 6: Size of the array: ${numbers.size}")

    // Example 7: Checking if an element exists
    println("Example 7: Does the array contain 25? ${numbers.contains(25)}")

    // Example 8: Getting the index of an element
    val index = numbers.indexOf(25)
    println("Example 8: Index of 25: $index")

    // Example 9: Sorting the array
    val sortedNumbers = numbers.sortedArray()
    println("Example 9: Sorted array: ${sortedNumbers.joinToString(", ")}")

    // Example 10: Filtering elements
    val filteredNumbers = numbers.filter { it > 20 }
    println("Example 10: Filtered array (elements > 20): ${filteredNumbers.joinToString(", ")}")

    // Example 11: Transforming elements (map)
    val doubledNumbers = numbers.map { it * 2 }
    println("Example 11: Array with elements doubled: ${doubledNumbers.joinToString(", ")}")

    // Example 12: Creating an empty array
    val emptyArray = emptyArray<String>()
    println("Example 12: Is the array empty? ${emptyArray.isEmpty()}")

    // Example 13: Array with a specific type
    val intArray = intArrayOf(1, 2, 3, 4, 5)
    println("Example 13: Integer array: ${intArray.joinToString(", ")}")
}
