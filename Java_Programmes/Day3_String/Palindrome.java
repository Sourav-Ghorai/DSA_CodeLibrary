import java.util.Scanner;

public class Palindrome {
        public static void main(String [] args){
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter a String: ");
                String str = sc.nextLine();
                int n = str.length();
                int i = 0, j = n-1;
                int flag = 0;
                while(i<j){
                        if(str.charAt(i) != str.charAt(j)){
                                flag = 1;
                                break;
                        }
                        i++; j--;
                }
                if(flag == 1){
                        System.out.println("Not Palindrome.");
                }else{
                        System.out.println("Palindrome.");
                }
        }
}
