package College_Programmes.Day4_ExceptionHandling;

public class ToString {

    public static void main(String[] args) {
        try {
            // Code that may throw an exception
            int result = divide(10, 0);
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            // Catching ArithmeticException and printing the exception information using toString()
            System.out.println(e.toString());
        }
    }

    public static int divide(int numerator, int denominator) {
        return numerator / denominator;
    }
}

