public class IfElseIfElse {
    public static void main(String[] args) {
        
        int number = 10;

        // 1. Simple if statement
        System.out.println("1. Simple if statement:");
        if (number > 0) {
            System.out.println("The number is positive.");
        }

        // 2. if-else statement
        System.out.println("\n2. if-else statement:");
        if (number % 2 == 0) {
            System.out.println("The number is even.");
        } else {
            System.out.println("The number is odd.");
        }

        // 3. if-else if-else statement
        System.out.println("\n3. if-else if-else statement:");
        if (number > 0) {
            System.out.println("The number is positive.");
        } else if (number < 0) {
            System.out.println("The number is negative.");
        } else {
            System.out.println("The number is zero.");
        }

        // 4. Nested if statement
        System.out.println("\n4. Nested if statement:");
        if (number > 0) {
            if (number % 2 == 0) {
                System.out.println("The number is positive and even.");
            } else {
                System.out.println("The number is positive but odd.");
            }
        } else {
            System.out.println("The number is not positive.");
        }

        // 5. if-else if ladder
        System.out.println("\n5. if-else if ladder:");
        int age = 20;
        if (age < 13) {
            System.out.println("Child");
        } else if (age < 20) {
            System.out.println("Teenager");
        } else if (age < 60) {
            System.out.println("Adult");
        } else {
            System.out.println("Senior Citizen");
        }
    }
}
