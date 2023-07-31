
public class LeetCodeArray {
    public static void main(String[] args) {
        int nums[] = { 1, 3, 5, 6 };
        int target = 4;
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                System.out.println(i);
                break;
            } else if (target >= nums[n - 1]) {
                System.out.println(n);
                break;
            } else {
                if (nums[i] > target) {
                    System.out.println(i);
                    break;
                }
            }
        }
    }
}