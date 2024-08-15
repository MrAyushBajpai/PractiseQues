// Define a class named Car
class Car {
    // Fields (attributes) of the class
    String brand;
    String model;
    int year;

    // Method to display car details
    void displayDetails() {
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Year: " + year);
    }
}

// Main class
public class ClassesExample {
    public static void main(String[] args) {
        // Create objects of the Car class
        Car car1 = new Car();
        Car car2 = new Car();

        // Set field values for car1
        car1.brand = "Toyota";
        car1.model = "Corolla";
        car1.year = 2020;

        // Set field values for car2
        car2.brand = "Honda";
        car2.model = "Civic";
        car2.year = 2021;

        // Call method on car1 and car2
        System.out.println("Car 1 Details:");
        car1.displayDetails();

        System.out.println("\nCar 2 Details:");
        car2.displayDetails();
    }
}
