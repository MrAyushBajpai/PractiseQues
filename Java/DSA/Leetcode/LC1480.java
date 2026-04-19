import java.util.Arrays;

public class LC1480 {
    public int[] runningSum(int[] nums) {
        for (int i = 1; i < nums.length; i++){
            nums[i] = nums[i] + nums[i-1];
        }
        return nums;   
    }

    public static void main(String[] args) {
        LC1480 obj = new LC1480();

        // basic case
        int[] a1 = {1, 2, 3, 4};
        System.out.println(Arrays.toString(obj.runningSum(a1))); // [1, 3, 6, 10]

        // single element
        int[] a2 = {5};
        System.out.println(Arrays.toString(obj.runningSum(a2))); // [5]

        // zeros
        int[] a3 = {0, 0, 0};
        System.out.println(Arrays.toString(obj.runningSum(a3))); // [0, 0, 0]

        // negative values
        int[] a4 = {-1, 2, -3, 4};
        System.out.println(Arrays.toString(obj.runningSum(a4))); // [-1, 1, -2, 2]

        // mixed
        int[] a5 = {10, -5, 3};
        System.out.println(Arrays.toString(obj.runningSum(a5))); // [10, 5, 8]

        // empty array
        int[] a6 = {};
        System.out.println(Arrays.toString(obj.runningSum(a6))); // []
    }
}