public class Recursion {
    public static void PrintNumb(int n) {
        if (n == 6) {
            return;
        } else {
            System.out.print(n+" ");
            PrintNumb(n + 1);
        }
    }

    public static void main(String[] args) {
        int numb = 1;
        PrintNumb(numb);
    }
}