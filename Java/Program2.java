public class Program2{
    public static int Comparegreater(int n1,int n2) {
              if(n1>n2){
                return n1;
              }else{
                return n2;
              }
    }
    public static void main(String [] args) {
        int a=21;
        int b=5;
        int sol=Comparegreater(a,b);
        System.out.println(sol);
    }
}