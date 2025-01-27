fun main() {
    // Creating Lists
    val immutableList = listOf("Apple", "Banana", "Cherry") // Immutable list
    val mutableList = mutableListOf("Dog", "Cat", "Bird")   // Mutable list

    println("Immutable List: $immutableList")
    println("Mutable List: $mutableList")

    // Accessing elements
    println("First element: ${immutableList[0]}")
    println("Last element: ${immutableList.last()}")

    // Iterating over a list
    println("Iterating over immutable list:")
    for (item in immutableList) {
        println(item)
    }

    println("Using forEach:")
    immutableList.forEach { item -> println(item) }

    // Adding elements to a mutable list
    mutableList.add("Fish")
    mutableList.addAll(listOf("Horse", "Rabbit"))
    println("Mutable List after additions: $mutableList")

    // Removing elements from a mutable list
    mutableList.remove("Cat")
    mutableList.removeAt(0) // Removes the first element
    println("Mutable List after removals: $mutableList")

    // Filtering lists
    val filteredList = immutableList.filter { it.startsWith("A") }
    println("Filtered List (starts with 'A'): $filteredList")

    // Transforming lists
    val upperCaseList = immutableList.map { it.uppercase() }
    println("Transformed to uppercase: $upperCaseList")

    // Sorting lists
    val unsortedList = listOf(3, 1, 4, 1, 5, 9)
    val sortedList = unsortedList.sorted()
    val sortedDescendingList = unsortedList.sortedDescending()
    println("Original List: $unsortedList")
    println("Sorted List: $sortedList")
    println("Sorted Descending List: $sortedDescendingList")

    // Checking conditions
    println("Does the list contain 'Banana'? ${immutableList.contains("Banana")}")
    println("Is the list empty? ${immutableList.isEmpty()}")

    // Finding elements
    val numbers = listOf(1, 2, 3, 4, 5)
    println("First even number: ${numbers.find { it % 2 == 0 }}")
    println("All even numbers: ${numbers.filter { it % 2 == 0 }}")
    println("Index of 3: ${numbers.indexOf(3)}")

    // Joining elements
    val joinedString = immutableList.joinToString(", ")
    println("Joined String: $joinedString")
}
