public class Program4 {
    public static int Power(int n1, int n2) {
        int power=1;
        for(int i=1;i<=n2;i++){
             power=n1*n1;
        }
        return power;
    }
    public static void main(String [] args) {
        int n=5;
        int x=2;
        System.out.println(Power(n,x));       
    }
}
    