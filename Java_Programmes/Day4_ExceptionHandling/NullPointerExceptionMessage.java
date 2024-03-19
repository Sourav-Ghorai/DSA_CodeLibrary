package College_Programmes.Day4_ExceptionHandling;

public class NullPointerExceptionMessage {

    public static void main(String[] args) {
        try {
            // Simulating a scenario where a NullPointerException might occur
            String value = null;
            int length = value.length();
            System.out.println("Length of value: " + length);
        } catch (NullPointerException e) {
            // Handling NullPointerException and providing a custom message
            System.out.println("NullPointerException caught: " + e.getMessage());
            // e.printStackTrace();
        }
    }
}

