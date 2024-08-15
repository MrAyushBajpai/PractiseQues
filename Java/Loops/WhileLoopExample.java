public class WhileLoopExample {
    public static void main(String[] args) {
        
        // 1. Simple while loop
        System.out.println("1. Simple while loop:");
        int i = 0;
        while (i < 5) {
            System.out.println("i = " + i);
            i++;
        }

        // 2. While loop with a condition
        System.out.println("\n2. While loop with a condition:");
        int num = 10;
        while (num > 0) {
            System.out.println("num = " + num);
            num -= 2;  // Decrease num by 2 each iteration
        }

        // 3. Infinite while loop (with break)
        System.out.println("\n3. Infinite while loop (with break):");
        int count = 0;
        while (true) {
            if (count == 3) {
                break;  // Exit the loop when count is 3
            }
            System.out.println("count = " + count);
            count++;
        }

        // 4. While loop with continue
        System.out.println("\n4. While loop with continue:");
        int x = 0;
        while (x < 5) {
            x++;
            if (x == 3) {
                continue;  // Skip the rest of the loop when x is 3
            }
            System.out.println("x = " + x);
        }

        // 5. While loop with complex condition
        System.out.println("\n5. While loop with complex condition:");
        int a = 5;
        int b = 10;
        while (a < b && b > 5) {
            System.out.println("a = " + a + ", b = " + b);
            a++;
            b--;
        }

        // 6. Do-while loop
        System.out.println("\n6. Do-while loop:");
        int y = 0;
        do {
            System.out.println("y = " + y);
            y++;
        } while (y < 5);
    }
}
