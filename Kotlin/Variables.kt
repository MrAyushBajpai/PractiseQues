fun main() {
    // Immutable variable (val): Cannot be reassigned after initialization
    val immutableValue: Int = 10
    println("Immutable value (val): $immutableValue")
    // immutableValue = 20 // Uncommenting this line will cause a compilation error

    // Mutable variable (var): Can be reassigned
    var mutableValue: Int = 20
    println("Mutable value (var) before reassignment: $mutableValue")
    mutableValue = 30
    println("Mutable value (var) after reassignment: $mutableValue")

    // Different data types in Kotlin
    val intValue: Int = 42          // Integer type
    val doubleValue: Double = 3.14  // Double type (floating-point number)
    val charValue: Char = 'A'       // Character type
    val stringValue: String = "Hello, Kotlin!" // String type
    val booleanValue: Boolean = true           // Boolean type
    val longValue: Long = 10000000000L         // Long type (large integers)
    val shortValue: Short = 32000             // Short type
    val byteValue: Byte = 127                 // Byte type

    // Printing all data types
    println("Integer value: $intValue")
    println("Double value: $doubleValue")
    println("Character value: $charValue")
    println("String value: $stringValue")
    println("Boolean value: $booleanValue")
    println("Long value: $longValue")
    println("Short value: $shortValue")
    println("Byte value: $byteValue")

    // Type inference: Kotlin can infer the type without explicitly specifying it
    val inferredInt = 50  // Kotlin infers this as Int
    val inferredString = "Type Inference"  // Kotlin infers this as String
    println("Inferred Int value: $inferredInt")
    println("Inferred String value: $inferredString")

    // Nullable types: Using `?` to indicate that a variable can hold null
    var nullableValue: String? = "I am nullable"
    println("Nullable value: $nullableValue")
    nullableValue = null
    println("Nullable value after assigning null: $nullableValue")

    // Safe calls and Elvis operator
    val length = nullableValue?.length ?: "Null value"
    println("Length of nullable value or default message: $length")
}
