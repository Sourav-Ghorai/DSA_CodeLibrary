import java.util.Scanner;

public class CountWord {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter a String: ");
                String str = sc.nextLine();
               
                String[] word = str.split(" "); 
                int n = word.length;
                System.out.println("The number of words is: "+n);
                sc.close();
        }
}
