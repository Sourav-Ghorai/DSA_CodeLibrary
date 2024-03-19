import java.util.Scanner;
public class CountChar{
        public static void main(String [] args){
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter a String: ");
                String str = sc.nextLine();
                int n = str.length();
                System.out.println("The length of the given string is: " + n);
                sc.close();
        }
}