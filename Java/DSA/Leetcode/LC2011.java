public class LC2011 {
    public int finalValueAfterOperations(String[] operations) {
        int x = 0;
        for (String op: operations){
            if (op.charAt(1) == '+') x++;
            else x--;
        }
        return x;    
    }

    public static void main(String[] args) {
        LC2011 obj = new LC2011();

        // basic mix
        String[] t1 = {"--X", "X++", "X++"};
        System.out.println(obj.finalValueAfterOperations(t1)); // 1

        // all increments
        String[] t2 = {"++X", "++X", "X++"};
        System.out.println(obj.finalValueAfterOperations(t2)); // 3

        // all decrements
        String[] t3 = {"--X", "X--", "X--"};
        System.out.println(obj.finalValueAfterOperations(t3)); // -3

        // mixed cancel out
        String[] t4 = {"++X", "X--"};
        System.out.println(obj.finalValueAfterOperations(t4)); // 0

        // single op
        String[] t5 = {"X++"};
        System.out.println(obj.finalValueAfterOperations(t5)); // 1

        // empty input
        String[] t6 = {};
        System.out.println(obj.finalValueAfterOperations(t6)); // 0

        // alternating
        String[] t7 = {"++X", "--X", "X++", "X--"};
        System.out.println(obj.finalValueAfterOperations(t7)); // 0
    }
}