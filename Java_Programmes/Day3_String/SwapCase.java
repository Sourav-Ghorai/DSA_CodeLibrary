import java.util.Scanner;

public class SwapCase {
        public static void main(String [] args){
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter a String: ");
                String str = sc.nextLine();
                int n = str.length();
                String newStr = "";
                for(int i = 0; i<n; i++){
                        if(str.charAt(i)>='A' && str.charAt(i)<='Z'){
                                newStr += Character.toLowerCase(str.charAt(i));
                        }
                        else if(str.charAt(i)>='a' && str.charAt(i)<='z'){
                                newStr += Character.toUpperCase(str.charAt(i));
                        }
                        else{
                                newStr += str.charAt(i);
                        }
                }
                System.out.println("The given string is: " + str);
                System.out.println("The string after swapping: "+ newStr);
        }
}
