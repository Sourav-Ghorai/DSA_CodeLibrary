package College_Programmes.Day4_ExceptionHandling;

public class PrintStackTrace {
        public static void main(String[] args) {
                try {
                        // Code that may throw an exception
                        // int result = divide(10, 0);
                        System.out.println("Result: " + 10/0);
                } catch (ArithmeticException e) {
                        // Catching ArithmeticException and printing the stack trace
                        e.printStackTrace();
                }
        }
        
        // public static int divide(int numerator, int denominator) {
        //         // A simple method that may throw an ArithmeticException
        //         return numerator / denominator;
        // }
            
}
