
public class Strings {
    public static void main(String[] args) {
        String name = "pratyush";
        System.out.println("name length: " + name.length());

        for (int i = 0; i < name.length(); i++) {
            System.out.print(name.charAt(i) + "_");
        }

        String ss = name.substring(3, name.length());
        System.out.println();
        System.out.println(ss);
        StringBuilder sb = new StringBuilder("Tony");
        System.out.println(sb);
        sb.setCharAt(0, 'S');
        System.out.println(sb);        
        sb.insert(2, 'n');
        sb.insert(5, 'i');
        sb.insert(6, 'e');
        System.out.println(sb);
        sb.delete(5,7);
        sb.deleteCharAt(2);
        System.out.println(sb);

        StringBuilder sb2= new StringBuilder("A");
        System.out.println(sb2);
        char ch='B';
        for(int i=1;i<4;i++){
             sb2.append(ch);
             ch++;
        }
        System.out.println(sb2);
        //reverse-string
        int n=sb2.length();
        for(int i=n-1;i>=0;i--){
            System.out.print(sb2.charAt(i));
        }
        //reverse-hello
        StringBuilder sb3=new StringBuilder("hello");
        System.out.println("\n"+sb3);
        int m=sb3.length();
        for(int i=m-1;i>=0;i--){
            System.out.print(sb3.charAt(i));
        }
    }

}
