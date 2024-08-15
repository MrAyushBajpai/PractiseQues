// Define an interface named Drawable
interface Drawable {
    // Abstract method (does not have a body)
    void draw();
}

// Define an abstract class named Shape
abstract class Shape implements Drawable {
    // Abstract method to be implemented by subclasses
    abstract double area();

    // Regular method in the abstract class
    void display() {
        System.out.println("This is a shape.");
    }
}

// Concrete class that extends Shape and implements Drawable
class Circle extends Shape {
    private double radius;

    // Constructor to initialize the radius
    Circle(double radius) {
        this.radius = radius;
    }

    // Implement the abstract method from Shape
    double area() {
        return Math.PI * radius * radius;
    }

    // Implement the draw method from Drawable interface
    public void draw() {
        System.out.println("Drawing a Circle");
    }
}

// Concrete class that extends Shape and implements Drawable
class Rectangle extends Shape {
    private double width, height;

    // Constructor to initialize width and height
    Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }

    // Implement the abstract method from Shape
    double area() {
        return width * height;
    }

    // Implement the draw method from Drawable interface
    public void draw() {
        System.out.println("Drawing a Rectangle");
    }
}

// Main class
public class AbstractAndInterfaceExample {
    public static void main(String[] args) {
        // Create objects of concrete classes
        Shape circle = new Circle(5.0);
        Shape rectangle = new Rectangle(4.0, 6.0);

        // Call methods
        System.out.println("Circle:");
        circle.draw();
        circle.display();
        System.out.println("Area: " + circle.area());

        System.out.println("\nRectangle:");
        rectangle.draw();
        rectangle.display();
        System.out.println("Area: " + rectangle.area());
    }
}
