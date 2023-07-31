public class Bits {
    public static void main(String[]args) {
        int n=5;
        int pos=3;
        int Bitmask=1<<pos;
        if((Bitmask&n)==0){
            System.out.println("Bit was 0");
        } else{
            System.out.println("Bit was 1");
        }
    }
}
