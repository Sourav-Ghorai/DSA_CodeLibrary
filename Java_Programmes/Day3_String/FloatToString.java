import java.util.Scanner;
public class FloatToString {
        public static void main(String []args){
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter a floating number: ");
                float f = sc.nextFloat();
                String str = Float.toString(f);
                System.out.println("The string conversion is: " + str);
                sc.close();
        }
}
