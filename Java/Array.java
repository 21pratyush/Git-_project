public class Array{
    public static void main(String[]args) {
        int r=5;
        int c=2;
        int arr[][]=new int[r][c];
        int count=1;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=count;
                count++;
            }
        }
        //printing array
        for(int i=0;i<r;i++){
            System.out.println();
            for(int j=0;j<c;j++){
                System.out.print(arr[i][j]+"  ");
            }
        }
    }
}
