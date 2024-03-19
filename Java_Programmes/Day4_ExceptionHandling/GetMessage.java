package College_Programmes.Day4_ExceptionHandling;

public class GetMessage {

    public static void main(String[] args) {
        try {
            // Code that may throw an exception
            int result = divide(10, 0);
            System.out.println("Result: " + result);
        } catch (Exception e) {
            // Catching ArithmeticException and printing the exception message using getMessage()
            System.out.println("Exception Message: " + e.getMessage());
        }
    }

    public static int divide(int numerator, int denominator) {
        // A simple method that may throw an ArithmeticException
        return numerator / denominator;
    }
}

