package College_Programmes.Day4_ExceptionHandling;

import java.util.Scanner;

public class MultipleException {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            // Simulating a NumberFormatException
            System.out.print("Enter an integer: ");
            String input = scanner.nextLine();
            int number = Integer.parseInt(input);

            // Simulating an ArrayIndexOutOfBoundsException
            int[] numbers = {1, 2, 3};
            System.out.print("Enter an index: ");
            int index = scanner.nextInt();
            int result = numbers[index];

        } catch (NumberFormatException e) {
            // Handling NumberFormatException
            System.out.println("NumberFormatException caught: " + e.getMessage());

        } catch (ArrayIndexOutOfBoundsException e) {
            // Handling ArrayIndexOutOfBoundsException
            System.out.println("ArrayIndexOutOfBoundsException caught: " + e.getMessage());

        } catch (Exception e) {
            // Handling any other exceptions
            System.out.println("Exception caught: " + e.getMessage());

        } finally {
            // Closing resources in the finally block
            scanner.close();
            System.out.println("Scanner closed in finally block.");
        }
    }
}

