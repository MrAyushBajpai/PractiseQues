public class TernaryOperator {
    public static void main(String[] args) {
        
        int number = 10;

        // 1. Basic ternary operator
        System.out.println("1. Basic ternary operator:");
        String result = (number > 0) ? "Positive" : "Negative";
        System.out.println("The number is " + result + ".");

        // 2. Ternary operator with multiple conditions
        System.out.println("\n2. Ternary operator with multiple conditions:");
        int age = 18;
        String ageGroup = (age < 13) ? "Child" : (age < 20) ? "Teenager" : "Adult";
        System.out.println("The person is an " + ageGroup + ".");

        // 3. Ternary operator to find the maximum of two numbers
        System.out.println("\n3. Ternary operator to find the maximum of two numbers:");
        int a = 5, b = 7;
        int max = (a > b) ? a : b;
        System.out.println("The maximum of " + a + " and " + b + " is " + max + ".");

        // 4. Ternary operator to check for even or odd number
        System.out.println("\n4. Ternary operator to check for even or odd number:");
        String parity = (number % 2 == 0) ? "Even" : "Odd";
        System.out.println("The number " + number + " is " + parity + ".");
    }
}
