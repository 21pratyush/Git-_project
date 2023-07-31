package Array_geeksforgeeks;

public class Array {
    public static void swap(int current, int arr[], int i) {
        int temp = current;
        current = arr[i];
        arr[i] = temp;
    }

    public static void main(String[] args) {
        int arr[] = { 2, 7, 11, 15 };
        int current = arr[0];
        System.out.println(current);
    }
}
