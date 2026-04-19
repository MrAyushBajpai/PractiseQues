public class LC2235 {
    public int sum(int num1, int num2) {
        return num1 + num2;
    }

    public static void main(String[] args) {
        LC2235 obj = new LC2235();

        // basic cases
        System.out.println(obj.sum(1, 2));      // 3
        System.out.println(obj.sum(10, 20));    // 30

        // zero cases
        System.out.println(obj.sum(0, 5));      // 5
        System.out.println(obj.sum(0, 0));      // 0

        // negative numbers
        System.out.println(obj.sum(-1, 1));     // 0
        System.out.println(obj.sum(-5, -7));    // -12

        // mixed values
        System.out.println(obj.sum(100, -50));  // 50
    }
}