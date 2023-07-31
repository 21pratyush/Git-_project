public class LeetCode {
    public static void main(String[] args) {
        int nums[] = { 2, 7, 11, 15 };
        int indx1 = 0;
        int indx2 = 0;
        int target = 26;
        for (int i = 0; i < (nums.length - 1); i++) {
            for (int j = i; j < (nums.length - 1); j++) {
                if (nums[i] + nums[j + 1] == target) {
                    indx1 = i;
                    indx2 = j + 1;
                    break;
                }
            }
            if (indx1 > 0 && indx2 > 0) {
                break;
            } else {
                continue;
            }
        }
        if ((indx1 <= 0) && (indx2 <= 0)) {
            System.out.println("Target not possible");
        } else {
            System.out.print("Indices: " + indx1);
            System.out.print("," + indx2);
        }
    }
}