public class ForLoopExample {
    public static void main(String[] args) {
        
        // 1. Simple for loop
        System.out.println("1. Simple for loop:");
        for (int i = 0; i < 5; i++) {
            System.out.println("i = " + i);
        }

        // 2. For loop with multiple variables
        System.out.println("\n2. For loop with multiple variables:");
        for (int i = 0, j = 5; i < 5; i++, j--) {
            System.out.println("i = " + i + ", j = " + j);
        }

        // 3. For-each loop (Enhanced for loop)
        System.out.println("\n3. For-each loop (Enhanced for loop):");
        int[] numbers = {10, 20, 30, 40, 50};
        for (int number : numbers) {
            System.out.println("Number: " + number);
        }

        // 4. Nested for loop
        System.out.println("\n4. Nested for loop:");
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3; j++) {
                System.out.println("i = " + i + ", j = " + j);
            }
        }

        // 5. For loop with break
        System.out.println("\n5. For loop with break:");
        for (int i = 0; i < 5; i++) {
            if (i == 3) {
                break;  // Exit the loop when i is 3
            }
            System.out.println("i = " + i);
        }

        // 6. For loop with continue
        System.out.println("\n6. For loop with continue:");
        for (int i = 0; i < 5; i++) {
            if (i == 2) {
                continue;  // Skip the rest of the loop when i is 2
            }
            System.out.println("i = " + i);
        }
    }
}
