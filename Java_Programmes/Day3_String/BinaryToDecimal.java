import java.util.Scanner;
public class BinaryToDecimal{
        public static void main(String [] args){
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter a Binary number: ");
                String str = sc.nextLine();
                int n = str.length();
                int dec = 0, j = 0;
                for(int i = n-1; i>=0; i--){
                        int temp = str.charAt(i) - '0';
                        dec += temp * Math.pow(2, j);
                        j++;
                }
                System.out.println("The Decimal value is: " + dec);
                sc.close();
        }
}