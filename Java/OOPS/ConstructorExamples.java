// Define a class named Person
class Person {
    // Fields (attributes) of the class
    String name;
    int age;

    // Default constructor
    Person() {
        this.name = "Unknown";
        this.age = 0;
    }

    // Parameterized constructor
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Constructor with default value for age
    Person(String name) {
        this(name, 0); // Calls the parameterized constructor with default age
    }

    // Method to display person's information
    void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

// Main class
public class ConstructorExamples {
    public static void main(String[] args) {
        // Create objects using different constructors

        // Using default constructor
        Person person1 = new Person();
        System.out.println("Person 1 Info:");
        person1.displayInfo();

        // Using parameterized constructor
        Person person2 = new Person("Alice", 30);
        System.out.println("\nPerson 2 Info:");
        person2.displayInfo();

        // Using constructor with default value for age
        Person person3 = new Person("Bob");
        System.out.println("\nPerson 3 Info:");
        person3.displayInfo();
    }
}
