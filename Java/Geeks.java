public class Geeks {
    public static void main(String[] args) {
        int N = 5;
        int arr[] = new int[N];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = i + 1;
            if (arr[3] == 4) {
                arr[3] = 5;
                break;
            }
        }
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0) {
                break;
            }
            System.out.print(arr[i] + " ");
        }
        //algo
        System.out.println();
        for(int i=0;i<arr.length;i++){
            if(arr[i]!=i+1){
                System.out.println(i+1);
                break;
            }
        }
        
    }
}
