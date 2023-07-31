public class Program3 {
     public static float CircumferenceOfCircle(float r) {
            float pi=22/7;
            float c=2*pi*r;
            return c;
     }
      public static void main(String [] args) {
        float radius=10;
        float sol=CircumferenceOfCircle(radius);
        System.out.println(sol);
      }   
}
