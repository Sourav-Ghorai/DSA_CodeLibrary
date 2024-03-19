import java.util.Scanner;

public class StringReverse {
        public static void main(String [] args){
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter a String: ");
                String str = sc.nextLine();
                int n = str.length();
                String newStr = "";
                int i = n-1;
                while(i>=0){
                        newStr += str.charAt(i);
                        i--;
                }
                System.out.println("The reversed string is: "+newStr);
        }
}
