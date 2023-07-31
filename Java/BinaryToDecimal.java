public class BinaryToDecimal {
    public static void main(String[] args) {
        int nums[] = { 1, 0, 1, 0, 1 };
        int n = nums.length;

        for (int i = n-1; i >= 0; i--) {
            int j = 0;
        
            do {
                int digit = 0;
                digit += nums[i] * (2 ^ j);
                System.out.print(digit);
                j++;
            } while (j < i);
        }
    }
}
