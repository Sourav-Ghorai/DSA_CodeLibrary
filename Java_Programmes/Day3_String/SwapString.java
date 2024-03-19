import java.util.Scanner;

public class SwapString {
        public static void main(String [] args){
                Scanner sc = new Scanner(System.in);
                String str1, str2;
                System.out.print("Enter first String: ");
                str1 = sc.nextLine();
                System.out.print("Enter second String: ");
                str2 = sc.nextLine();

                int n1 = str1.length(), n2 = str2.length();
                str1 = str1 + str2;
                str2 = str1.substring(0, n1);
                str1 = str1.substring(n1, n1+n2);

                System.out.println("The two strings are: ");
                System.out.println(str1);
                System.out.println(str2);
        }
}
