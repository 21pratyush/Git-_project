public class LeetCodeArray2 {
    public static void main(String[] args) {
        int nums[] = { 1, 1, 2, 3, 4, 5, 4, 5};
        // remove-duplicate
        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = i; j < nums.length - 1; j++) {
                if (nums[i] == nums[j + 1]) {
                    System.out.println("remove " + (i + 1) + "th element");
                }
            }
        }
    }
}