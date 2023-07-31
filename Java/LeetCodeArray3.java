public class LeetCodeArray3 {
    public static void main(String[] args) {
        int nums[] = { 5, 3, 3, 4, 5, 6, 2, 1, 2, 3, 5, 6, 1, 7 };
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
        if (nums[nums.length - 1] < 9) {
            nums[nums.length - 1]++;
            for (int i = 0; i < nums.length; i++) {
                System.out.print(nums[i] + " ");
            }
        } else {
            System.out.println("advance function");
        }
    }
}