
public class DataStructure {
    public static void main(String args[]) {
        int n = 5;
        int arr[] = new int[n];
        int count = n;
        for (int i = 0; i < n; i++) {
            arr[i] = count;
            count--;
        }
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
      
        for (int i = 0; i < n; i++) {
            System.out.print(" "+arr[i]);
        }
    }
} 