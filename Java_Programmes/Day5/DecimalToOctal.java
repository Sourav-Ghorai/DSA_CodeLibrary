package College_Programmes.Day5;
import java.util.Scanner;

public class DecimalToOctal {

    public static void main(String[] args) {
        // Input decimal number
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a decimal number: ");
        int decimalNumber = scanner.nextInt();

        // Convert decimal to octal
        String octalNumber = Integer.toOctalString(decimalNumber);

        // Display the result
        System.out.println("Octal equivalent: " + octalNumber);
    }
}
