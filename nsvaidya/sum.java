import java.util.Scanner;
public class sum{

     public static void main(String []args){
         Scanner in = new Scanner(System.in);
         int a, b, s;
         System.out.println("Enter a number");
         a = in.nextInt();
         System.out.println("Enter a second number");
         b = in.nextInt();
         s=a+b;
        System.out.println("The sum is " + s);
     }
}