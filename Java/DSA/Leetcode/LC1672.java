public class LC1672 {
    public int maximumWealth(int[][] accounts) {
        int maxWealth = 0;
        for(int[] account: accounts){
            int currentWealth = 0;
            for (int money: account){
                currentWealth += money;
            }
            maxWealth = Math.max(maxWealth, currentWealth);
        }    
        return maxWealth;
    }

    public static void main(String[] args) {
        LC1672 obj = new LC1672();

        // basic case
        int[][] a1 = {
            {1, 2, 3},
            {3, 2, 1}
        };
        System.out.println(obj.maximumWealth(a1)); // 6

        // different sizes
        int[][] a2 = {
            {1, 5},
            {7, 3},
            {3, 5}
        };
        System.out.println(obj.maximumWealth(a2)); // 10

        // single customer
        int[][] a3 = {
            {10, 20, 30}
        };
        System.out.println(obj.maximumWealth(a3)); // 60

        // zeros
        int[][] a4 = {
            {0, 0},
            {0, 0}
        };
        System.out.println(obj.maximumWealth(a4)); // 0

        // mixed values
        int[][] a5 = {
            {2, 8},
            {1, 9},
            {5, 5}
        };
        System.out.println(obj.maximumWealth(a5)); // 10

        // edge: empty outer array
        int[][] a6 = {};
        System.out.println(obj.maximumWealth(a6)); // 0
    }
}